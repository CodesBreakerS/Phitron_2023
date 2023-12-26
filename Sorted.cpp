#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin >> t;
       for(int i=1;i<=t;i++)
       {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
           cin >> a[i];
           b[i]=a[i];
        }
        sort(b,b+n);
        int cnt=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                cnt++;
            }
            else break;
        }
        if(cnt==n-1) cout << "YES" << endl;
        else cout << "NO" << endl;

       }

return 0;
}