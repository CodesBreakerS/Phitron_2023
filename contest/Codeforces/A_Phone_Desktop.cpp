#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
      int t; cin >> t;
      while(t--){
        int x,z; cin >> x >> z;
        int a=0,y=z;
        if(y%2==1){
            a=(y/2)+1;
        }else{
            a=y/2;
        }
        z*=4;
        if(x+z>a*15){
            if((x+z)/15 > a){
                a = (x+z)/15;
            }
            if((x+z)%15 !=0){
                a++;
            }
            }
            cout << a << endl;
        }
        

return 0;
}