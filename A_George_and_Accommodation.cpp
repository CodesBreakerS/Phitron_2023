#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       int cnt=0;
       cin >> t;
       while(t--)
       {
        int r,p;
        
        cin >> r >> p;
        if(r<=p-2)
        {
            cnt++;
        }
       }
       cout << cnt;

return 0;
}