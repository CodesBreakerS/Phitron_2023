#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const int N = 1e5+5;
int dp[N];
void clr()
{
    for(int i=0;i<=N;i++) {
            dp[i] = -1;
        }
}
bool solve(int i,int n)
{
    if(i==n) return true;
    if(i>n) return false;

    if(dp[i] != -1) return dp[i];
    bool op1 = solve(i+3,n);
    bool op2 = solve(i*2,n);
    return dp[i] = op1 || op2;

}
int main()
{
       int t;cin>>t;
       while(t--)
       {
        int n; cin >> n;
        int i = 1;
        clr();
        if(solve(i,n))
        cout << "YES" << endl;
        else cout << "NO" << endl;
       }

return 0;
}