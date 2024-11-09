#include<bits/stdc++.h>
using namespace std;

int main()
{
       long long a[4];
       for(int i=0;i<=3;i++)
       {
       cin >> a[i];
       }
       int cnt=0;
       for(int i=0;i<3;i++)
       {
        for(int j=i+1;j<=3;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
                i++;
            }
       }
       }
       cout << cnt;
return 0;
}