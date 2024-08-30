#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int visited[N];
vector<int>adj_lst[N];

void bfs(int src)
{
    queue<int>q;
    visited[src]=1;
    q.push(src);
    while(!q.empty()){
        int head = q.front();
        q.pop();
        cout<<head<<" ";
        for(int adj_node:adj_lst[head]){
            if(visited[adj_node]==-1){
                visited[adj_node]=1;
                q.push(adj_node);
            }
        }
    }
}

void dfs(int node)
{
    visited[node]=1;
    cout<<node<<" ";

    for(int adj_node : adj_lst[node]){
        if(visited[adj_node]==-1)
            dfs(adj_node);
    }
}


int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj_lst[u].push_back(v);
        adj_lst[v].push_back(u);
    }

    for(int i=0;i<N;i++){
        visited[i]=-1;
    }

    int src;
    cin>>src;
    bfs(src);
    cout<<endl;
    for(int i=0;i<N;i++){
        visited[i]=-1;
    }
    dfs(src);
    cout<<endl;

    return 0;
}

/**
            7
            |
            |
1-----2-----3----5
      |     |
      |     |
      6-----4

node=6
edge=6
1 2 6 3 4 5
1 4 2 3 6 5

7 7

1 2
2 6
2 3
3 4
3 7
3 5
4 6
1

*/
