#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const long long INF = 1e18;

int main()
{
       int n,e; cin >> n >> e;
       long long dist[n+1][n+1];
       for(long long i = 1; i<=n;i++)
       {
        for(ll j = 1; j<=n;j++)
        {
            dist[i][j] = INF;
            if(i == j) dist[i][j] = 0;
        }
       }
       while(e--)
       {
        ll a,b,w; cin >> a >> b >> w; 
        
        // if(dist[a][b] == INF || dist[a][b] < w )  
        dist[a][b] = min(w,dist[a][b]);
        // else continue;
       }

       for(int k =1;k<=n;k++)
       {
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=n;j++)
            {
                dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);
            }
        }
       }

    //    for(int i = 1;i<=n; i++)
    //    {
    //     for(int j =1;j<=n;j++)
    //     {
    //         if(dist[i][j] == INF) cout << "INF ";
    //         else cout << dist[i][j] << " ";
    //     }
    //     cout << endl;
    //     }

    int query; cin >> query;
    while(query--)
    {
        int s,d; cin >> s >> d;
        if(dist[s][d] == INF)
        {
            cout << "-1" << endl;
        }
        else 
        cout << dist[s][d] << endl;
    }

return 0;
}