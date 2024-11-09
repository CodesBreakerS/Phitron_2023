#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int dp[1005][1005];
int lcs(string a,int n,string b,int m)
{
    if (n==0 || m==0) return 0;

    if (dp[n][m] != -1) return dp[n][m];
    
    if(a[n-1] == b[m-1])
    {
        return dp[n][m] = lcs(a,n-1,b,m-1) + 1;
    }
    else 
    {
        int ans1 = lcs(a,n-1,b,m);
        int ans2 = lcs(a,n,b,m-1);
        return dp[n][m] = max(ans1,ans2);
    }
}

int main()
{
       string n,m; cin >> n >> m;
       for(int i=0;i<=n.size();i++)
       {
        for(int j =0;j<=m.size();j++)
        {
            dp[i][j] = -1;
        }
       }
       cout << lcs(n,n.size(),m,m.size());

return 0;
}