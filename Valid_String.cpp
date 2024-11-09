#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin >> t;
       char a[1001];
       while(t--)
       {
        cin >> a;
        int A=0;
        int b=0;
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]=='A')
            {
                A++;
            }
            else b++;
        }
        if(A==b)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
       }

return 0;
}