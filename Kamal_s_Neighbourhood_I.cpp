#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
vector<int>ans;

void dfs(int u)
{
    //section 1 : new node e jaoar por er kaj
    visited[u] = true;
    ans.push_back(u);
    for(int j:adj[u])
    {
        // section 2 : new neighbor e jaoar por
        if(!visited[j])
         dfs(j);
        //section 3 : neighbor er kaj sesh er por
    }
    // cout << u << " ";

}

int main()
{
       int n,m; cin >> n >> m;
       for(int i = 0;i<m;i++)
       {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        // adj[v].push_back(u);
       }

    //    for(int i=1;i<=n;i++)
    //    {
    //     // cout << "Node " << i << ": ";
    //     if(adj[i].size()>0)
    //     {
    //         cout << i << ": ";
    //     }
    int i; cin >> i; dfs(i);
    int k = ans.size();
    //     for(auto j:adj[i])
    //     {
    //         cnt++;
    //     }
    cout << k;
        // if(adj[i].size()>0)
        // {
        //     cout << endl;
        // }
        // cout << endl;
    //    }
// cout << cnt;
return 0;
}