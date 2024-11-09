#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adj[N][N];
vector<int>Adj[N];
int main()
{
       int n;cin >> n; int m; cin >> m;
       int u,v;
       for(int i=0;i<m;i++)
       {
        cin >> u >> v ;  
        Adj[u].push_back(v);       // directed graph
       }
       cout << "Print list :" << endl;

       for(int i=1;i<=n;i++)
       {
        cout << " List " << i << ": ";
        for(int j:Adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
       }

       for(int i=1;i<=n;i++)
       {
        for(int j:Adj[i])
        {
           adj[i-1][j-1]=1;
        }
        // cout << endl;
       }
       cout << " Print matrix: " << endl;
       for(int i = 0;i<n;i++)
       {
        for(int j = 0;j<n;j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
       }

return 0;
}