#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+7;
vector<int>adj[N];
bool visited[N];
vector<int>ans;

    int cnt;
int dfs(int u)
{
    visited[u] = true; cnt++;
    // ans[count].push_back(u);
    for(int j:adj[u])
    {
        if(!visited[j])
        {
            dfs(j);
        }
    }
    // if(cnt>1) ans.push_back(cnt);

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

       for(int i=0;i<N;i++)
       {
         cnt =0;
        // if(adj[i].size()>0)
        // {
        //     dfs(i);
            if(!visited[i])
            {
                // cnt++;
                dfs(i);
                if(cnt>1) ans.push_back(cnt); 
            }
        // }
        // for(int i=0;i<N;i++)
        // {
        //     if(visited[i]) continue;
        //     cnt++;
        //     dfs(i);
        // }

       }
    //    cout << count;
       sort(ans.begin(),ans.end());
       for(int j:ans)
       {
        cout << j << " ";
       }
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