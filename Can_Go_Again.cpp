#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const int INF = 1e7;

int main()
{
       int n,e; cin >> n >> e;
       long long dist[n+1][n+1];
       for(int i = 1; i<=n;i++)
       {
        for(int j = 1; j<=n;j++)
        {
            dist[i][j] = INF;
            if(i == j) dist[i][j] = 0;
        }
       }
       while(e--)
       {
        long long a,b,w; cin >> a >> b >> w;
        dist[a][b] = w;
       }

    //    for(int i = 1;i<=n; i++)
    //    {
    //     for(int j = 1;j<=n;j++)
    //     {
    //         if(dist[i][j] == INF) cout << dist[i][j] <<" " ;
    //         else cout << dist[i][j] << " ";
    //     }
    //     cout << endl;
    //    }

       for(int k =1;k<=n;k++)
       {
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=n;j++)
        {
            if(dist[i][k] < INF && dist[k][j] <INF)
                dist[i][j] = min(dist[i][j],dist[i][k] + dist [k][j]);
                //     if(dist[i][k] + dist [k][j] < dist[i][j])
                // {
                //     dist[i][j] = dist[i][k] + dist [k][j];
                // }
                // else dist[i][j] = INF;
            }
        }
       }

    //    for(int i = 1;i<=n; i++)
    //    {
    //     for(int j = 1;j<=n;j++)
    //     {
    //         if(dist[i][j] == INF) cout << dist[i][j] <<" " ;
    //         else cout << dist[i][j] << " ";
    //     }
    //     cout << endl;
    //    }
       
        bool cycle = false;      //** for detect neg cycle

      for(int i = 1;i<=n; i++)
       {
        for(int j = 1;j<=n;j++)
        {
            if(i == j)
            {
                if(dist[i][j] <  0 )
                {
                     cycle = true;
                     break;
                } 
            }
        }
       }
       int s,t; cin >> s >> t;
       while(t--)
       {
        int d; cin >> d;
       if(cycle) 
       {
        cout << "Negative Cycle Detected"; break;
       }

       else 
       {
            if(dist[s][d] == INF) 
            {
                cout << "Not Possible" << endl;
            }
            else cout << dist[s][d] << endl;
        // cout << endl;
        }
       }

return 0;
}