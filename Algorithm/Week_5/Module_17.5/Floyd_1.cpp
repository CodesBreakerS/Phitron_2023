#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const int INF = 1e7;

int main()
{
       int n; cin >> n;
       int dist[n+1][n+1];
       for(int i = 1; i<=n;i++)
       {
        for(int j = 1; j<=n;j++)
        {
            int w; cin >> w;
            dist[i][j] = w;
            if(i == j) dist[i][j] = 0;
        }
       }
    //    while(e--)
    //    {
    //     int a,b,w; cin >> a >> b >> w;
    //     dist[a][b] = w;
    //    }

    //    for(int i = 1;i<=n; i++)
    //    {
    //     for(int j = 1;j<=n;j++)
    //     {
    //         if(dist[i][j] == INF) cout << "INF ";
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
                if(dist[i][k] + dist [k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist [k][j];
                }
            }
        }
       }

    //    cout << "After relax" << endl;
       
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

       if(cycle) cout << "Cycle detected.";

       else 
       {
       for(int i = 1;i<=n; i++)
       {
        for(int j = 1;j<=n;j++)
        {
            if(dist[i][j] == INF) cout << "INF ";
            else cout << dist[i][j] << " ";
        }
        cout << endl;
        }
       }

return 0;
}