#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        for(int i=0 ; i<n;i++) {cin >> a[i];}

        int mx = INT_MIN; int ans=INT_MIN;
        map<int,int> mp;
        while(n--)
        {
            mp[a[n]]++;
            if(mp[a[n]] >= mx) mx = mp[a[n]];
        }
        for(auto &m:mp)
        {
            if(m.second == mx)
            {
                ans = max(ans,m.first);
            }
        }
        cout << ans << " " << mp[ans] << endl;
    }
    return 0;
}