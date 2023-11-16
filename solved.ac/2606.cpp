#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int main() {
    int N,M; 
    // N : 컴퓨터 수 
    // M : 직접 연결되어 있는 컴퓨터 쌍의 수
    cin >> N >> M;

    vector<pair<int,int>> connects;
    queue<int> q;
    set<int> connected;
    connected.insert(1);
    int c1,c2;
    for(int i=0;i<M;i++){
        cin >> c1 >> c2;
        pair<int,int> p = make_pair(c1,c2);
        connects.push_back(p);
        if (c1==1){
            connected.insert(c2);
            q.push(c2);
        }
        else if (c2==1){
            connected.insert(c1);
            q.push(c1);
        }
    }

    int s = connects.size();
    while(!q.empty()){
        int com = q.front();
        q.pop();

        for(auto it=connects.begin();it!=connects.end();it++){
            int c1,c2;
            pair<int,int> p = *it;
            c1 = p.first;
            c2 = p.second;
            int cn;
            if (c1==com){
                cn = c2;
            }
            else if (c2==com){
                cn = c1;
            }

            if (connected.find(cn)==connected.end()){
                connected.insert(cn);
                q.push(cn);
            }
        }
    }

    cout << connected.size()-1 << endl;

    /* input test print
    for(auto it=connects.begin();it!=connects.end();it++){
        auto v = *it;
        cout << v.first << ' ' << v.second << endl;
    }    
    */
    
    return 0;
}