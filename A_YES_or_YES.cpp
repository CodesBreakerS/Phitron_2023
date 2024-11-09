#include<bits/stdc++.h>
using namespace std;

int main()
{
       string a;
       int n;
       cin >> n ;
       while(n--)
       {
        cin >> a;
        if(a=="yes" || a=="YES" || a=="Yes" || a=="yEs" || a=="yeS" || a=="YeS" || a=="YEs" || a=="yES")
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
       }

return 0;
}