#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin >> n;
       string a;
       cin >> a;
       int i=0;
       int flag = 0;
       if(n>=26)
       {
        flag =1;
       }
       if(flag == 1) cout << "YES";
       else cout << "NO";

return 0;
}