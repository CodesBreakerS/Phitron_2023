#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+7;
vector<int>adj[N];
bool visited[N];
vector<int>ans[N];

void dfs(int u)
{
    int cnt=0;
    visited[u] = true;
    for(int j:adj[u])
    {
        if(!visited[j])
        {
            dfs(j);cnt++;
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
    int count=0;
       for(int i=0;i<N;i++)
       {
        if(adj[i].size()>0)
        {
            if(!visited[i])
            {
                count++;
                dfs(i); 
            }
        }

       }
       cout << count;
    //    sort(ans->begin(),ans->end());
    //    for(int i=0;i<count;i++)
    //    {
    //     for(int j:ans[i])
    //    {
    //     if(ans[i].size()>1)
    //     {
    //         cout << j << " ";
    //     }
    //    }
    //    }

return 0;
}