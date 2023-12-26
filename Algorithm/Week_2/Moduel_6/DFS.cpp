#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
vector<int>ans[N];
int count;

void dfs(int u)
{
    //section 1 : new node e jaoar por er kaj
    visited[u] = true;
    
    for(int j:adj[u])
    {
        // section 2 : new neighbor e jaoar por
        if(!visited[j])
         dfs(j);
        //section 3 : neighbor er kaj sesh er por
    }
    cout << u << " ";

}

int main()
{
    int component;
       int n,e; cin >> n >> e;
       for(int i=0;i<e;i++)
       {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
       }

        cout << "DFS traversal : "; 
        dfs(1);
        // for(int i=0;i<N;i++)
        // {
        //     if(adj[i].size()>0){
        //     if(visited[i] == false)
        //     {   
        //      dfs(i);
        //     }
        //     }
        // }


    //    for(int i=1;i<=n;i++)
    //    {
    //     // cout << "Node " << i << ": ";
    //     if(adj[i].size()>0)
    //     {
    //         cout << i << ": ";
    //     }
    //     for(auto j:adj[i])
    //     {
    //         cout << j << " ";
    //     }
    //     if(adj[i].size()>0)
    //     {
    //         cout << endl;
    //     }
    //     // cout << endl;
    //    }

return 0;
}