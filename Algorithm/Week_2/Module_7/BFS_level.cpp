#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+7;
vector<int>adj[N];
bool visited[N]; 
vector<int > level[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true; 
    // level[s] = 0;
    while(!q.empty())
    {
        int u= q.front();
        q.pop();
        cout << u << " ";
        for(int v:adj[u])
        {
            if(!visited[v]) 
            {
                q.push(v); visited[v] = true; 
                // level[v] = level[u]+1;
                // level[v].push_back(level[u]);
            }
        }
    }
}

int main()
{
    int n,e; cin >> n >> e; int u,v;
    for(int i=0;i<e;i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << " BFS order : "; 
    bfs(0);
       cout << endl;
       int i; cin >> i;
    //    for(int i =1;i<=n;i++)
    //    {
        // cout << "Level of Node " << i << ": " << level[i] << endl;
    //    }
    for(int j:level[i])
    {
        cout << j << " ";
    }
return 0;
}