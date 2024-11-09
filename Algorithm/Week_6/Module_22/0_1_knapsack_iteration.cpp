#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const int N = 1e3+5;
int v[N],w[N];
int dp[N][N];

int main()
{
       int n;cin >> n;
       for(int i =0;i<n;i++)
       {
        cin >> v[i];
       }
       for(int i =0;i<n;i++)
       {
        cin >> w[i];
       }
       int b; cin >> b;
       for(int i =0;i<=n;i++)
       {
        for(int j =0;j<=b;j++)
        {
            if(i==0 || j == 0) dp[i][j] = 0;
            else  dp[i][j] = -1;
        }
       }

       for(int i=1;i<=n;i++)
       {
        for(int j=1;j<=b;j++)
        {
    if(w[i-1] <= j )
    {
    int choice1 = dp[i-1][j-w[i-1]] + v[i-1];
    int choice2 = dp[i-1][j];
    dp[i][j] = max(choice1,choice2);
    }
    else {
        dp[i][j] = dp[i-1][j];
    }
    }
        }
        cout  << dp[n][b] << endl;
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=b;j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}