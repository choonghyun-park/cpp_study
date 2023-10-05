#include <string>
#include <vector>
#include <map>
#include <deque>

using namespace std;

int temp2idx(int temp,int t_min){
    return temp-t_min;
}

bool outOfRange(int temp,int t_min, int t_max){
    return (temp<t_min || temp>t_max);
}

int solution(int temperature, int t1, int t2, int a, int b, vector<int> onboard) {
    int answer = 0;
    int t_out = temperature;
    int t_in = temperature; // 초기값
    bool t_out_high;
    
    // 모든 경우의 수를 탐색 + 가지치기
    // 쾌적영역을 2차원 배열상에 지도처럼 구현
    // 특정 영역을 반드시 지나야 하는 방법의 수를 모두 탐색
    // 중간에 이미 최소 cost를 넘어서는 경우 가지치기
    // 특정 영역을 못지나는 경우도 가지치기
    
    int t_max,t_min;
    map<string,int> cost;
    cost["same"]=b;
    // 영역 확정하기
    if (t_out>t2){          // 실외온도가 높아 낮춰야 하는 경우
        t_max = t_out;
        t_min = t1;
        cost["up"]=0;
        cost["down"]=a;
        t_out_high=true;
    }
    else if (t_out<t1){     // 실외온도가 낮아 높여야 하는 경우
        t_max = t2;
        t_min = t_out;
        cost["up"]=a;
        cost["down"]=0;
        t_out_high=false;
    }
    
    vector<vector<int>> t_map; //t_map[temp,time];
    vector<int> empty_line(onboard.size(),0);
    for(int t=t_min;t<=t_max;t++){
        vector<int> line(onboard.size());
        if (t>=t1 && t<=t2)
            copy(empty_line.begin(),empty_line.end(),line.begin());
        else
            for (int i=0;i<onboard.size();i++)
                line[i] = -onboard[i];
        t_map.push_back(line);
    }
    
    /*
    // map test print
    for (auto it=t_map.begin();it!=t_map.end();it++){
        auto line = *it;
        for (auto iter=line.begin();iter!=line.end();iter++){
            cout << *iter << " ";
        }
        cout << endl;
    }
    */
    
    map<string,int> init_state;
    init_state["temp"] = t_out;
    init_state["time"] = 0;
    init_state["cost"] = 0;

    deque<map<string,int>> dq;
    dq.push_back(init_state);
    vector<pair<string,int>> ns;
    if (t_out_high){
        if (a>=b)
            ns = {make_pair("up",1),make_pair("same",0),make_pair("down",-1)};
        else 
            ns = {make_pair("up",1),make_pair("down",-1),make_pair("same",0)};
    }
    else{
        if (a>=b)
            ns = {make_pair("down",-1),make_pair("same",0),make_pair("up",1)};
        else
            ns = {make_pair("down",-1),make_pair("up",1),make_pair("same",0)};
    }
    
    vector<int> costs;
    
    int whole_min_cost = -1;
    
    while(!dq.empty()) {
        auto state = dq.front();
        dq.pop_front();
        int state_temp = state["temp"];
        int state_time = state["time"];
        int state_cost = state["cost"];
        int temp_idx = temp2idx(state_temp,t_min);
        
        if (outOfRange(state_temp,t_min,t_max)) continue;
        
        if (whole_min_cost!=-1 && state_cost>whole_min_cost) continue;
        
        if(t_map[temp_idx][state_time]==-1) continue;
        else if(t_map[temp_idx][state_time]==0) t_map[temp_idx][state_time]=state_cost;
        else{ //이미 방문했던 곳은 최소 cost만 남김. 최소가 아니면 가지치기.
            int cost_min = t_map[temp_idx][state_time];
            int cost_cur = state_cost;
            if (cost_min>cost_cur) t_map[temp_idx][state_time] = cost_cur;
            else continue;
        }
        
        if(state_time==onboard.size()-1){
            // costs.push_back(state["cost"]);
            if (whole_min_cost==-1) whole_min_cost = state_cost;
            else if(whole_min_cost>state_cost) whole_min_cost = state_cost;
            continue;
        }
        
        for(auto it=ns.begin();it!=ns.end();it++){
            auto n = *it;
            map<string,int> next_state;
            next_state["temp"]=state["temp"]+n.second;
            next_state["time"]=state["time"]+1;
            if (next_state["temp"]==t_out)
                next_state["cost"]=state["cost"];
            else
                next_state["cost"]=state["cost"]+cost[n.first];
            
            dq.push_back(next_state);
        }
    }
    answer = whole_min_cost;
    // answer = *min_element(costs.begin(),costs.end());
    
    return answer;
}


// 테스트케이스 정답률 : 23/25
// 2개 문제는 시간초과로 풀이 실패
// 탐색 가중치만 바꿔도 시간초과 여부가 크게 바뀌는 것으로 봐서는 시간 기준이 상당히 까다로운 듯. 확실히 넉넉하지는 않음.
// 시간을 더 줄이는 방법이 있을 테지만, 큰 의미는 없다고 본다. 아마 시간이 좀 넉넉해지면 정답일 듯 하고, 꽤 고민해 봤는데, 별 수확은 없는 것 같아 마무리. 