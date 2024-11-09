#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int t; cin >> t; 
       int h,m; char c;string s;
       while(t--)
       {
        cin >> h >> c >> m;
        if(h==0){
            h=12;
            s = " AM";
        }
        else if(h>12){
            h-=12;
            s=" PM";
        }
        else if(h==12){
            s=" PM";
        }
        else if(h<12){
            s=" AM";
        }

        if(h<10) cout << "0"; cout << h << c;
        if(m<10) cout << "0";cout << m << s << endl;

       }

return 0;
}