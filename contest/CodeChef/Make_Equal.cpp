#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t;cin >> t;
       long long n;
       while(t--){
        cin >> n;
        long long a[n],a1,a2,m=INT16_MAX;
        
        for(long long i=0;i<n;i++){
            cin >> a[i];
            
            if(i == 0){
                a1=a[i];
            }
            else if(i==n-1){
                a2=a[i];
            }
            if(a[i]<m){
                m=a[i];
            }
        }
        if(n==1) cout << "YES" << endl;
        else if(a1 != a2 || m<a1 || m<a2){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
        
       }

return 0;
}