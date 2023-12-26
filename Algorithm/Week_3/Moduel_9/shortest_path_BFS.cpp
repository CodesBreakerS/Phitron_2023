#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
vector<int>adj[N];
bool visited[N];
int level[N];
int parent[N];


void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true; parent[s] = -1;
    level[s] = 0;
    while(!q.empty())   // O(n)
    {
        int u=q.front();
        q.pop();
        // cout << u << " ";
        for(int v:adj[u])    // O(M) , here m is edge, the loop will run (2xm) maximum
        {
        if(visited[v]) continue;
        q.push(v); visited[v] = true;
        level[v] = level[u]+1;
        parent[v] = u;
        }
    }
}

int main()  // This operations complexity is O(n+m) 
{
    int n,e; cin >> n >> e;
    for(int i =0;i<e;i++)
    {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int s,d; cin >> s >> d;
    bfs(s);   /// Complexity O(n+m)  here n is node of the graph  
              /// and m is edge of the graph
    cout << "Distance: " << level[d];

    // for(int i =1;i<=n;i++)
    // {
    //     cout << endl << "Parent of Node " << i << ": " << parent[i];
    // }

 // **** Complexity of Path **** O(n)   
    vector<int>path;
    int cur = d;
    while(cur!=-1)
    {
        path.push_back(cur);
        cur = parent[cur];
    }
    reverse(path.begin(),path.end());

    cout << endl << "Path fron source to destination: ";
    for(int node:path)
    {
        cout << node << " ";
    }

return 0;
}