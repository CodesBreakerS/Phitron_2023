#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin >> n;
       int a[n];
       int cnt=0;
       int r;
       cin >> r;
       for(int i=0;i<n;i++)
       {
        cin >> a[i];
        
       }
       for(int i=0;i<n;i++)
       {
        if(a[i]>0)
        {
            if(a[i]>=a[r-1])
            {
                cnt++;
            }
        }
       }
       cout << cnt++;

       

return 0;
}