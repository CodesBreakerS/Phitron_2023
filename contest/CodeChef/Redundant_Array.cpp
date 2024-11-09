#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n); 
        // int a[n];
        int x=INT_MAX;
        for(int i=0;i<n;i++){
            cin >> a[i];
            x=min(x,a[i]);
        }
       
        int r= max_element(a.begin(),a.end()) - a.begin();
        a[l]=x;
        int l= max_element(a.begin(),a.end()) - a.begin();
        a[r] = x;
        int s = ((r+1)-(l+1)+1)*x;
        cout << s;
        for(auto i:a){
            cout <<i << " ";
        }cout << endl;

        // cout << l;
    }

}
