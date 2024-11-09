#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n,k,l,c,d,p,nl,np;
       cin >> n >> k >> l >> c >> d >> p >> nl >> np;
       int nt=(k*l)/nl;
       int ct=c*d;
       int pt=p/np;

      //cout << nt << " " << ct << " " << pt << endl;
       int t=min(nt,min(ct,pt))/n;
       cout << t;

return 0;
}