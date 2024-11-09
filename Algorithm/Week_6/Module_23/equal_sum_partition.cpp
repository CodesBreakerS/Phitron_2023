#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

bool dp[1005][1005];
int main()
{
    int s;
       int n; cin >> n;
       int a[n];
       int sum =0;
       for(int i=0;i<n;i++) 
       {
        cin >> a[i]; sum+=a[i];
       }
       if(sum%2 == 0) 
       {
         s= sum/2;
         dp[n+1][s+1];
         dp[0][0] = true;
        // cout << "T ";
        for(int i=1;i<=s;i++) 
        {
            dp[0][i] = false;
            // cout << "F ";
        }
        cout << endl;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=s;j++)
            {
                if(a[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
                    if(dp[i][j]) cout << "T ";
            else cout << "F ";
                }
                else 
                {
                dp[i][j] = dp[i-1][j];
                if(dp[i][j]) cout << "T ";
            else cout << "F ";
                }
            }
            cout << endl;
        }
        if(dp[n][s]) cout << "YES";
        else cout << "No";
       }
       else 
       {
        cout << "NO";
       }
    

return 0;
}