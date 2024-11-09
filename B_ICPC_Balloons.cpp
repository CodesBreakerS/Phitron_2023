#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin >> t;
       int s;
       string a;

       for(int i=1;i<=t;i++)
       {
        cin >> s;
        cin.ignore();
        cin >> a;
        sort(a.begin(),a.end());
        int cnt=2;
        for(int i=0;i<a.size()-1;i++)
        {
              
              if(a[i]==a[i+1])
              {
                     cnt++;
              }
              else cnt=cnt+2;
        }
        cout << cnt << endl;
       }

return 0;
}