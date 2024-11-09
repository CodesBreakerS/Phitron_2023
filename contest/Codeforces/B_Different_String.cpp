#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int t; cin >> t;
       while(t--){
        string x; cin >> x;
        int n=0; n= x.length(); bool ans=false;
        for(int i=1;i<n;i++){
            if(x[i]!=x[i-1] ){
                ans = true; break;
            }
        }
        if(ans == true){
            cout << "YES" << endl << x.back(); x.pop_back(); cout << x << endl;
        }else {
            cout << "NO" << endl;
        }
       }

return 0;
}