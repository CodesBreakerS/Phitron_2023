#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int dp[10005][10005];
 int solve(int n,int w[],int v[],int s)
 {
    if(n==0 || s==0 ) return dp[n][s] = 0;
    if(dp[n][s] != -1) return dp[n][s];

    if(w[n-1] <= s)
    {
    int op1 = solve(n,w,v,s-w[n-1]) + v[n-1];
    int op2 = solve(n-1,w,v,s);
    return dp[n][s] = max(op1,op2);
    }
    else return dp[n][s] = solve(n-1,w,v,s);
 }

int main()
{
       int n; cin >> n;
       int v[n],w[n];
       for(int i=0;i<n;i++)
       {
        cin >> v[i];
        w[i] = i+1;
       }
       for(int i=0;i<=n;i++)
       {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]  = -1;
        }
       }
        cout << solve(n,w,v,n);

return 0;
}