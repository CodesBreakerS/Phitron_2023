#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int t; cin >> t;
       int a,b,c;
       while(t--){
        cin >> a >> b >>c;
        if(a<b && b<c) {
            cout << "STAIR" << endl;
        }
        else if(a<b && b>c){
                cout << "PEAK" << endl;
        }
        else cout << "NONE" << endl;
        
       }

return 0;
}