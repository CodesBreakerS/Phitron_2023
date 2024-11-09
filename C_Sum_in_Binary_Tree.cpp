#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
       long long n;
       
       
       while(t--)
       {
        cin >> n;
        long long sum=n;

       while(n!=0)
       {
        n=n/2;
         sum+=n; 
       }
       cout << sum << endl;
       }
       
return 0;
}