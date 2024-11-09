#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int dp[1005][1005] ;
int solve(int n,int a[],int x)
{
    if(n == 0)
    {
         if(x == 0) return 1;
         else return 0;
    }
    if(dp[n][x] != -1) return dp[n][x];

    if(a[n-1] <=x)
    {
        int op1= solve(n-1,a,x-a[n-1]);
        int op2=solve(n-1,a,x);
        return dp[n][x] = op1 + op2;
    }
    else
    {
    return dp[n][x] = solve(n-1,a,x);
    }
}

int main()
{
       int n,x; cin >> n >> x;
       int a[n+1]; 
       for(int i =0 ;i<n;i++) cin >> a[i];

    for(int i =0;i<=n;i++)
    {
        for(int k = 0;k<=x;k++)
        {
            dp[i][k]= -1;
        }
    }
        
       cout << solve(n,a,x);

return 0;
}