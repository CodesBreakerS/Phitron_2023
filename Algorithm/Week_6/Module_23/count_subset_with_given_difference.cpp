#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int n,d;
       cin>> n >> d;
       int a[n+1],s=0;
       for(int i=0;i<n;i++)
       {
        cin >> a[i]; s+=a[i];
       }
       int x; x= (d+s); x=x/2;
    //    cout << x<< endl;

       int dp[n+1][x+1];
       dp[0][0] = 1;
       for(int i=1;i<=x;i++) 
       {
        dp[0][i] = 0;
       }

       for(int i=1;i<=n;i++)
       {
        for(int j=0;j<=x;j++)

        {
            if(a[i-1] <= j)
            {
                int op1 = dp[i-1][j-a[i-1]];
                int op2 = dp[i-1][j];
                dp[i][j] = (op1 + op2);
            }
            else dp[i][j] = dp[i-1][j];
        }
       }
       
    //    for(int i=0;i<=n;i++)
    //    {
    //     for(int j=0;j<=x;j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    //    }

       cout << dp[n][x];


return 0;
}