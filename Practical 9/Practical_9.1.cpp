#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void DFS(int node, vector<int> adj[], vector<int> &visited){
    visited[node]=1;
    cout<<node<<" ";

    for(int i=0;i<adj[node].size();i++){
        int next = adj[node][i];

        if(visited[next] == 0)
        DFS(next, adj, visited);
    }
}

void BFS(int start, vector<int> adj[], int n){
    vector<int> visited(n, 0);
    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(int i=0;i<adj[node].size();i++){
            int next = adj[node][i];

            if(visited[next] == 0){
                visited[next] = 1;
                q.push(next);
            }
        }
    }
}

int main(){
    int n, edges;
    cout<<"Enter number of buildings and roads:";
    cin>>n>>edges;

    vector<int> adj[n];

    cout<<"Enter roads(building1 building2):"<<endl;
    for(int i=0;i<edges;i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start;
    cout<<"Enter starting building:";
    cin>>start;

    vector<int> visited(n, 0);
    cout<<"DFS traversal:";
    DFS(start, adj, visited);

    cout<<endl<<"BFS traversal:";
    BFS(start, adj, n);

    return 0;
}