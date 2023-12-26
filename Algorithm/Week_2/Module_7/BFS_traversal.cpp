
#include "bits/stdc++.h"

using namespace std;
const int N = 1e5+7;
vector<int>adj[N];
bool visited[N];

void bfs(int u)
{
    queue<int>q;
    q.push(u); visited[u] = true;
    
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int j:adj[v])
        {
            if(visited[j])continue;
            q.push(j);
            visited[j] = true;
        }
    }
    
    
}

int main()
{
    int n,e; cin >> n >> e;
    for(int i =0;i<e;i++)
    {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(int i = 0;i<N;i++)
    {
        if(adj[i].size()>0)
        {
            cout << "Node " << i << " Connected to : ";
            for(int j:adj[i])
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    cout << "BFS graph traversal : ";
    bfs(0);
    

    return 0;
}
