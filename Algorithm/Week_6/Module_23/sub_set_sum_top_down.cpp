#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int dp[1005][1005] ;
bool solve(int n,int a[],int x)
{
    if(n == 0)
    {
         if(x == 0) return dp[n][x] = true;
         else return dp[n][x] = false;
    }
    if(dp[n][x] != -1) return dp[n][x];
    if(a[n-1] <=x)
    {
        bool op1= solve(n-1,a,x-a[n-1]);
        bool op2=solve(n-1,a,x);
        return dp[n][x] = op1 || op2;
    }
    else 
    return dp[n][x] = solve(n-1,a,x);
}

int main()
{
       int n,x; cin >> n >> x;
       int a[n+1]; 
       for(int i =1 ;i<=n;i++) cin >> a[i];
    for(int i =0;i<=n;i++)
    {
        for(int j = 0;j<=x;j++);
        {
            dp[n][x] = -1;
        }
    }
        
       if( solve(n,a,x)) cout << "YES";
       else cout << "NO";

return 0;
}