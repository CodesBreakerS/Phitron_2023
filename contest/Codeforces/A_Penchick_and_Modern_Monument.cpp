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
        int a[n+1];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int cnt = 0;
        int m = n/2;
        // cout << m << endl;
        for(int i=0;i<m;i++){
            if(a[i] > a[m]){
                // cout << a[i];
                a[i] = m;
                cnt++;
                // cout << "before " << cnt;
                
            }
        }
        // cout << "before " << cnt;
        for(int i = m+1;i<n;i++){
            if(a[i]< a[m])
            {
                // cout << a[i];
                a[i]= m; cnt++;
                // cout << "after " << cnt;
                
            }
        }
        cout << cnt << endl;
       }

return 0;
}