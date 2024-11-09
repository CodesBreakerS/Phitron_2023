#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int t; cin >> t;
       while(t--){
        int n,m; cin >> n >> m;
        if(n>=m && n%2 == m%2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

       }

return 0;
}