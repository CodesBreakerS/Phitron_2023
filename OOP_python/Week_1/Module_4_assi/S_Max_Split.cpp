#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    string a; cin >> a;
    int cnt=0;
    int n = a.size();
   // cout << n;
   for(int i=0;i<=n;i++)
   {
     if(a[i]=='L' && a[i+1]=='R')
     cnt++;
   }
   cout << cnt << endl;
   for(int i=0;i<=n;i++)
   {
     cout << a[i];
     if(a[i]=='R' && a[i+1]=='L')
     {
     cout << endl;
     }
     
   }
}