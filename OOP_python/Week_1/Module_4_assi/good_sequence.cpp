#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int n; cin >> n;
       map<int,int>mp;
       for(int i=1;i<=n;i++)
       {
        int s; cin >> s;
        mp[s]++;
       }
       int cnt = 0;
       for(auto m:mp)
       {
        int a = abs(m.first - m.second);
        // cout << m.first << " " << m.second<< endl;
        cnt = cnt+a;
       }
cout << cnt;
return 0;
}