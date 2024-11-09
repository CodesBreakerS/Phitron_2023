#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
vector<int>adj[N];
bool visited[N]; vector<int>ans[N];
int level[N];
void action()
{
    for(int i =0;i<N;i++)
    {
        visited[i] = false;
    }
}
void bfs(int s)
{
    queue<int>q;
    q.push(s); 
    visited[s] = true; level[s] = 0;
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

    
    int q; cin >> q;
       int s,d; 
       while(q--){ int flag =0;
        cin >> s >> d;
        action();
        bfs(s);
        for(int i =0;i<N;i++)
       {
        if(i ==d && !visited[i])
        cout << "-1" << endl;
        if(i == d && visited[i])
        {
            cout << level[i] << endl;
        }
        
       }
    //    if(flag == 1) cout << level[d] << endl;
    //    else cout << "-1" << endl;
}
return 0;
}