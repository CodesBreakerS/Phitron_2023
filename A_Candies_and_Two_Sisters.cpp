#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin >> t;
       while(t--)
       {
        long long n;
        cin >> n;
        if(n%2==0)
        {
            n=(n/2)-1;
        }
        else
        {
            n/=2;
        }
        cout << n << endl;
       }

return 0;
}