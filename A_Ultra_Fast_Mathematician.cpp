#include<bits/stdc++.h>
using namespace std;

int main()
{
       string a,b;
       cin >> a >> b;
       int len = a.length();
       char c[len];
       for(int i=0;i<len;i++)
       {
        if(a[i]=='1' && b[i]=='1')
        {
            c[i]='0';
        }
        else if(a[i]=='1' && b[i]=='0' || a[i]=='0' && b[i]=='1')
        {
            c[i]='1';
        }
        else 
        {
            c[i]='0';
        }
       }
       for(char x:c)
       {
       cout << x;
       }

return 0;
}