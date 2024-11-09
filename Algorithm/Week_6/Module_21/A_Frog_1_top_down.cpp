#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
#define ll long long
const int N = 1e5+5;
ll dp[N];
int solve(ll a[],ll n)
{
    if(n == 1)
    {
        return 0;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    else if(n == 2)
    {
        return dp[n] = abs(a[n]-a[n-1]);
    }
    else
    {
        ll choice1 = solve(a,n-1) + abs(a[n] - a[n-1]);
        ll choice2 = solve(a,n-2) + abs(a[n] - a[n-2]);
        return dp[n] = min(choice1,choice2);
    }
}

int main()
{
       ll n; cin >> n;
       ll a[n+1];
       for(int i=1;i<=n;i++)
       {
        dp[i] = -1;
        cin >> a[i];
       }
       cout << solve(a,n);

return 0;
}