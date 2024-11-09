#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
int main()
{
       int t; cin >> t;
       while(t--)
       {
        string x; cin >> x;
        int cnt =1;
        int n=0; n= x.length();
        for(int i=1;i<n;i++){
            if(x[i] !=x[i-1]){
                cnt++;i++;
            }
        }
        cout << cnt << endl;
       }

return 0;
}