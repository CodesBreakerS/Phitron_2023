/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin;
    int n,m,k;
    
    while(t--)
    {
      cin >> n >> m >> k;  
      int x[k];  int y[k];
      int cnt =0; int i=0;
      int a; int b;
      cin >> a >> b;
      for(int i=0;i<k;i++)
      {
          cin >> x[i] >> y[i];
          if(a-b==x[i]-y[i])
          {
             cnt++; 
          }
      }
    if(cnt==k)
    {
      cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    }
    
    

    return 0;
}
