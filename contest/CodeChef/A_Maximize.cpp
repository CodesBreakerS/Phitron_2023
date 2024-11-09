#include<bits/stdc++.h>
using namespace std;
int solve(int x){
    int gcd =0,cnt =0;
    for(int i=x-1;i>0;i--){
            gcd= max(__gcd(x,i)+i,gcd);
            if(__gcd(x,i)+i >= gcd){
                cnt = i;
            }

        }
        return cnt;
}
int main()
{
       int t;cin >> t;
       while(t--){
        int a; cin >> a;
        int c = solve(a);
        cout << c << endl;
       }

return 0;
}