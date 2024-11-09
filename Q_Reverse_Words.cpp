#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   getline(cin,a);

   stringstream b(a);
   string c;
   b >> c;
   reverse(c.begin(),c.end());
   cout << c;
   while(b>>c)
   {
    reverse(c.begin(),c.end());
    cout << " " << c ;
   }
return 0;
}