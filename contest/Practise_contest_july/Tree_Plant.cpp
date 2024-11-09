#include<bits/stdc++.h>
using namespace std;

int main()
{
       long long a[20]={0};
       a[0]=1;
       a[1]=2;
        int n =0; long long m = 2;
        for(int i=2;i<20;i++)
        {
            // n+=2;
            m*=4;
            // long long k=0;
            // k=n*m;
            a[i]=m;
        }
        //  for(int i=0;i<20;i++)
        // {
        //     cout << a[i] << " ";
        // }
        int t;
        cin >> t;
        cout << a[t-1];

return 0;
}