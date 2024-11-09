#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+7;
vector<int>adj[N];
bool visited[N];
int height[N];

void dfs(int u)
{
    visited[u] = true;

    for(int v:adj[u])
    {
        if(visited[v]) continue;
        dfs(v);
        height[u] = max(height[u],height[v]+1);

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
       int h; cin >> h;
        cout << "Height of Node " << h << ": " <<  height[h] << " " << endl;

return 0;
}