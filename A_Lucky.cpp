#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin >> n;
       string a;
       for(int i=1;i<=n;i++)
       {
        cin >> a;
        cin.ignore();
        int s=a.size();

        int s1=a[0]+a[1]+a[2];
        int s2=a[s-1]+a[s-2]+a[s-3];
        if(s1==s2) cout <<"YES" << endl;
        else cout << "NO" << endl;

       }
       

return 0;
}