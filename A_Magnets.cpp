#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin >> t;
       int a[t];
       int cnt=0;
       for(int i=0;i<t;i++)
       {
        cin >> a[i];
       }
       for(int i = 0;i<t;i++)
       {
        if(a[i]!=a[i+1])
        {
            cnt++;
        }
       }
cout << cnt;
return 0;
}