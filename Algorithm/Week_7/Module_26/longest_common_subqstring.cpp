#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       string a,b; cin >> a >> b;
       int n = a.size(); int m = b.size();
       int dp[n+1][m+1];
       for(int i=0;i<=n;i++)
       {
        for(int j =0;j<=m;j++)
        {
            if(i ==0 || j == 0) dp[i][j] = 0;
        }
       }

       for(int i=1;i<=n;i++)
       {
        for(int j =1;j<=m;j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else 
            {
                dp[i][j] = 0;
            }
        }
       }
    //    cout << dp[n][m];
    int i =n,j=m;
    int si,sj,mx=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(dp[i][j] > mx)
            {
                mx = dp[i][j];
                si = i; sj =j;
            }
        }
    }
    cout << mx << endl;
    string ans;
    while(si!= 0 || sj !=0)
    {
        if(a[si-1] == b[sj-1])
        {
            ans+=a[si-1];
            si--; sj--;
        }
        else{
            break;
            }
        }
    
    reverse(ans.begin(),ans.end());
    cout << ans;

return 0;
}