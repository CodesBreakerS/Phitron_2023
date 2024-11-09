#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin >> t;

       string a,b,c;
    //    int i=0;
    //    int j=0;
      for(int i=1;i<=t;i++)
       {
        cin >> a;
        cin >> b;
        cin >> c;


       // cout << a << " " << b << " " << c ;
         }
       
        for(int i=1;i<=t;i++)
        {
      if(a[0] == b[1] && b[1] == c[2])
      {
        if(a[0]=='.') 
        {
            cout << "DRAW" << endl;
            continue;
        }
        cout << a[0] << endl;
       }
       else if(a[2] == b[1] && b[1] == c[0])
      {
        if(a[2]=='.') 
        {
            cout << "DRAW" << endl;
            continue;
        }
        cout << a[2] << endl;
       }
       
       else if(a[0] == a[1] && a[1] == a[2])
      {
        if(a[0]=='.') 
        {
            cout << "DRAW" << endl;
            continue;
        }
        cout << a[0] << endl;
       }
       else if(b[0] == b[1] && b[1] == b[2])
      {
        if(b[0]=='.') 
        {
            cout << "DRAW" << endl;
            continue;
        }
        cout << b[0] << endl;
      }
      else if(c[0] == c[1] && c[1] == c[2])
      {
        if(c[0]=='.') 
        {
            cout << "DRAW" << endl;
            continue;
        }
        cout << c[0] << endl;
      }
      else if(a[0] == b[0] && b[0] == c[0])
      {
        if(a[0]=='.') 
        {
            cout << "DRAW" << endl;
            continue;
        }
        cout << a[0] << endl;
      }
      else if(a[1] == b[1] && b[1] == c[1])
      {
        if(a[1]=='.') 
        {
            cout << "DRAW" << endl;
            continue;
        }
        cout << a[1] << endl;
      }
      else if(a[2] == b[2] && b[2] == c[2])
      {
        if(a[2]=='.' && c[2]) 
        {
            cout << "DRAW" << endl;
            continue;
        }
        cout << a[2] << endl;
      }
        }
       


return 0;
}