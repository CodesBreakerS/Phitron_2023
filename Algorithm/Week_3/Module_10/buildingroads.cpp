#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;

const int N = 1e5+10;
vector<bool>visited(N,false);
vector<int>adj[N];

void dfs(int u)
{
    visited[u] = true;
    // cout << u << " ";
    for(int v:adj[u])
    {
        if(!visited[v])
        {
            dfs(v); 
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

    vector<int>roots;
    for(int j=1;j<=n;j++)
    {
          if(!visited[j])
            {
                roots.push_back(j);
                dfs(j);
            }
    }
cout << "Roots of components :";
    for(auto i:roots)
    {
        cout << i << " ";
    }
    cout << endl << "Edge to connect components: " << roots.size()-1 << endl;
    cout << "Edge connected to nodes :" << endl;
    for(int i =1;i<roots.size();i++)
    {
        cout << roots[i] << " " << roots[i-1] << endl;
    }

return 0;
}