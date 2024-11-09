#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;cin >> t;
        long long m,n;
       while(t--){
        cin >>n; 
        long long a[n]; long long cnt=0;
        for(long long i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(long long i=0;i<n;i++){
            if(a[i] < i){
                cnt += i-a[i];
                
            }
            else{
                cnt += a[i]-i;
            }
        }
        cout << cnt << endl;

       }

return 0;
}