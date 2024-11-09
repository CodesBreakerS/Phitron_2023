#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int t; cin >> t;
       while(t--){
        int a,b,c; cin >> a >> b >> c;
        for(int i=1;i<=5;i++){
            int mn = min(a,min(b,c));
            if(mn ==a){
                a++;
            }
            else if(mn ==b){
                b++;
            }
            else if(mn ==c){
                c++;
            }
        }
        int ans = 0;
        ans = a*b*c;
        cout << ans << endl;
       }

return 0;
}