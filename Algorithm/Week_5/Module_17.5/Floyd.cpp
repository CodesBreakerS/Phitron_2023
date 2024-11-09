#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const int INF = 1e5;

int main()
{
       int n; cin >> n ;
       long long dist[n+1][n+1];

       for(int i = 1; i<=n;i++)
       {
        for(int j = 1; j<=n;j++)
        {
            int w; cin >> w;
            if(w == -1) dist[i][j] = INF;
            else
             dist[i][j] = w;
            
        }
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

    long long mx = 0;
       for(int i = 1;i<=n; i++)
       {
        for(int j = 1;j<=n;j++)
        {
            
            
            if(dist[i][j] != INF) mx = max(mx,dist[i][j]);
        }
        }
    cout << mx;

return 0;
}