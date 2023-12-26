#include<bits/stdc++.h>
using namespace std;
int main()
{
   int *a=new int[5];
   for(int i=0;i<10;i++)
   {
    cin >> a[i];
   }
   cout << a << " ";
   delete[] a;

return 0;
}