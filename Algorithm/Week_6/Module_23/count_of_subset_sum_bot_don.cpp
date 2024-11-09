#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int n; cin >> n;
       int a[n+1];
       for(int i =0;i<n;i++) 
       {
        cin >> a[i];
       }
       int x; cin >> x;
       int dp[n+1][x+1];
        for(int i=1;i<=x;i++)
        {
            dp[0][i] = 0;
        }
        dp[0][0] = 1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=x;j++)
            {
                if(a[i-1] <= j)
                {
                    int op1 = dp[i-1][j-a[i-1]];
                int op2 = dp[i-1][j];
                dp[i][j] = op1 + op2;
                }
                else 
                dp[i][j] = dp[i-1][j];
            }
        }
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<=x;j++)
        //     {
        //         if(dp[i][j]) cout << "T ";
        //         else cout << "F ";
        //     }
        //     cout << endl;
        // }

        // cout << dp[n][x];

        if(dp[n][x]) cout << "Yes";
        else cout << "No";


return 0;
}