#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
vector<int>adj[N];
bool visited[N]; 
vector<int>ans;
int level[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true; 
    level[s] = 0;
    while(!q.empty())
    {
        int u= q.front();
        q.pop();
        // cout << u << " ";
        for(int v:adj[u])
        {
            if(!visited[v]) 
            {
                q.push(v); visited[v] = true;
                level[v] = level[u]+1;
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
    // cout << " BFS order : "; 
    bfs(0);
    //    cout << endl;
       int j; cin >> j;
       if(j==0) {
        cout << "0";
        return 0;
       }
       for(int i =0;i<N;i++)
       {
        if(level[i])
        {
            if(level[i] == j){
        ans.push_back(i);
            }
        }
       }
       sort(ans.begin(),ans.end());
       if(!ans.empty())
       {
       for(int v:ans)
       {
        cout << v << " ";
       }
       }
       else cout << "-1";
return 0;
}