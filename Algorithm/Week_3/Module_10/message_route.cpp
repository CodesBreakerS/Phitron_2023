#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;

const int N = 1e5+10;
vector<bool>visited(N,false);
vector<int>adj[N];
vector<int>level(N,0);
vector<int>parent(N,-1);

void bfs(int u)
{
    queue<int>q;
    q.push(u);
    level[u] = 0;
    visited[u] = true;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
                parent[v] = u;
                level[v] = level[u] +1;
            }
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

    
    bfs(1);
    int curr = n;
    cout << level[curr] << endl;
    vector<int>path;
    while(curr != -1)
    {
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(),path.end());
    for(auto i:path)
    {
        cout << i << " ";
    }
return 0;
}