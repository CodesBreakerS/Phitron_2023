#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin >> n;
       int x=(n+1)/2;
       int l=n; int f=1;
       for(int i=1;i<=n;i++)
       {
              for(int j=1;j<=n;j++)
              {
                     if(i==x && j==x)
                     {
                            cout << "X";
                     }
                     else if(j==f)
                     {
                            cout << "\\";
                     }
                     else if(j==l)
                     {
                            cout << "/";
                     }
                     else 
                     {
                            cout << " ";
                     }
                     
              }
              f++;
              l--;
              cout << endl;
       }

return 0;
}