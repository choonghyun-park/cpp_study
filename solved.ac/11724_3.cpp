#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>

using namespace std;

void make_edge(map<int,vector<int>> &graph, int key, int value);

int main() {
    // map,set을 사용하여 graph를 표현하는 방식.
    
    int N,M;
    cin >> N >> M;
    /*
    N : 정점의 개수
    M : 간선의 개수
    */
    map<int,vector<int>> graph;

    for (int i=0;i<M;i++){
        int u,v; // 간선의 양 끝점
        cin >> u >> v;
        make_edge(graph,u,v);
        make_edge(graph,v,u);
    }

    int connects_cnt = 0;
    set<int> visited;
    
    for (int i=1;i<=N;i++){
        int init_node = i;
        if (visited.find(init_node)!=visited.end()){
            continue;
        }

        queue<int> q;
        q.push(init_node);
        // BFS search
        while(!q.empty()){
            int node = q.front();
            q.pop();
            visited.insert(node);            
            vector<int> neighbors = graph[node];
            for (auto it=neighbors.begin();it!=neighbors.end();it++){
                int next_node = *it;
                if (visited.find(next_node)==visited.end()){
                    q.push(next_node);          
                }
            }
        }
        connects_cnt++;
    }
    cout << connects_cnt << '\n';
}

void make_edge(map<int,vector<int>> &graph, int key, int value){
    if (graph.find(key)==graph.end()){ // key가 존재하지 않음
            vector<int> vec;
            vec.push_back(value);
            graph[key] = vec;
    }
    else{ // key가 존재함
        vector<int> vec = graph[key];
        vec.push_back(value);
        graph[key] = vec;
    }
}