#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int t; cin >> t;
       while(t--){
        int n; cin >> n;
        string a; cin >> a; bool cnt = true;
        for(int i=1;i<n;i++){
            if(a[i-1] > a[i]){
                cnt =false; break;
            }
        }
        if(cnt){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
       }

return 0;
}