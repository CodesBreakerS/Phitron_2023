#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+7;
vector<int>adj[N];
bool visited[N];
int depth[N];

void dfs(int u)
{
    visited[u] = true;

    for(int v:adj[u])
    {
        if(visited[v]) continue;
        depth[v] = depth[u]+1;
        dfs(v);
    }
}

int main()
{
    int n,e; cin >> n >> e;  
    int u,v;
    for(int i = 0;i<e;i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }

       dfs(1);
       int d; cin >> d;
        cout << "Depth of Node " << d << ": " <<  depth[d] << " " << endl;

return 0;
}