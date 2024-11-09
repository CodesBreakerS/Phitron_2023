#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adj[N][N];
int main()
{
       int n;cin >> n; int m; cin >> m;
       int u,v,w;
       for(int i=0;i<m;i++)
       {
        cin >> u >> v >> w;  // weighted graph
        adj[u][v] = w;       // directed graph
        adj[v][u] = w;     // undirected graph
       }

       for(int i =1;i<=n;i++)
       {
        for(int j=1;j<=n;j++)
        {
        cout << adj[i][j] << " ";
        }
        cout << endl;
       }

return 0;
}