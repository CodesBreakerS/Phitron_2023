#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
#define ll long long

int main()
{
       ll n; cin >> n;
       ll a[n+1];
       a[0] = 1; a[1] = 1;
       for(int i =2;i<=n;i++)
       {
        a[i] = a[i-1]+a[i-2];
       }
       cout << a[n];

return 0;
}