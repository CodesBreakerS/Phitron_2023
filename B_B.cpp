#include<bits/stdc++.h>
using namespace std;
int main()
{
   char a[251];
   char b[251];
   cin >> a;
   int j=0;
   for(int i=0;a[i]!='\0';i++)
   {
    if(a[i]!=a[i+1])
    {
        b[j]=a[i];
        j++;
    }
   }
   b[j]='\0';
cout  << b;
return 0;
}