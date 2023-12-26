#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const int N = 1e5+5;
ll save[N];

ll fibi(ll u)
{
    if(u<=1) return 1;
    if(save[u] != -1) return save[u];
    save[u] = fibi(u-1) + fibi(u-2);
    return fibi(u-1)+fibi(u-2);
}

int main()
{
       ll n; cin >> n;
       for(int i=0;i<=n;i++)
       {
        save[i] = -1;
       }
        cout << fibi(n);

return 0;
}