#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int n;cin >> n;
       int a[n+1],dp[n+1];
       for(int i=1;i<=n;i++)
       {
        cin >> a[i];
       }
       dp[1]=0;
       dp[2] = abs(a[2]-a[1]);
       for(int i = 3;i<=n;i++)
       {
        int choice1 = dp[i-1] + abs(a[i] - a[i-1]);
        int choice2 = dp[i-2] + abs(a[i] - a[i-2]);
        dp[i] = min(choice1,choice2);
       }
       cout << dp[n];

return 0;
}