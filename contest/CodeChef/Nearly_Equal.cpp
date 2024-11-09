#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        string a,b; cin >> a >> b;
        int k=m;
         int j=0;int mn= 200;
         int z=(n-m)+1;
        //  cout << z << endl;
        int c=0;
        // while(j!=((n-m))){
        while(z--){
             int cnt=0;
        //    cout << c << " " << k << endl;
            for(int i=c,j=0;i<k,j<m;i++,j++){
                // for(int j=0;j<m;j++){
                if(a[i]!=b[j]){
                    // cout << i << ' ';
                    cnt++;
                }
                // cout << cnt << " ";
            }
            // cout << endl;
            // }
            mn = min(mn,cnt);
            // cout << cnt << endl;
            c++;k++;
        }
        cout << mn << endl;
    }
}
