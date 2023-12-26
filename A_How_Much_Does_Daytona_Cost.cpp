#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t; cin >> t; 
       while(t--)
       {int flag =0;
        int n,f; cin >> n >> f;
        int a[n]; for(int i =0;i<n;i++) 
        {
            cin >> a[i];
            if(a[i] == f) flag=1;
        }

        if(flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
       }

return 0;
}