#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N,M;
    // N : 정점의 수
    // M : 간선의 수
    
    cin >> N >> M;
    
    int MAX = N+1;          // 정점이 1부터 시작하기 때문에 1을 더해준다.
    vector<int> graph[MAX]; // 열의 크기가 MAX인 2차원 배열. 행은 가변
    bool visited[MAX]={false};

    for (int i=0;i<M;i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }   

    int ans=0;
    for (int init_node=1;init_node<=N;init_node++){
        if (visited[init_node]){
            continue;
        }
        queue<int> q;
        q.push(init_node);

        // bfs로 연결요소 파악
        while(!q.empty()){
            int node = q.front();
            q.pop();
            if (visited[node]){
                continue;
            }
            visited[node]=true;

            vector<int> neighbors = graph[node];
            for (auto it=neighbors.begin();it!=neighbors.end();it++){
                int next_node = *it;
                if (!visited[next_node]){
                    q.push(next_node);
                }
            }
        }
        ans++;
    }
    cout << ans << endl;
}