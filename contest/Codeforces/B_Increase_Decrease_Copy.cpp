#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
typedef long long ll;

int main()
{
       ll t; cin >> t;
       while(t--){
        ll n; cin >> n;
        ll a[n+1],b[n+1];
        for(ll i=0;i<n;i++){
            cin >> a[i];
            // if(i==0){
            //     a[n]=a[i];
            // }
        }
        for(ll i=0;i<=n;i++){
            cin >> b[i];
        }

        ll sum=0,mn =INT_MAX;
        bool cnt = false;
        for(ll i=0;i<n;i++){
            if(a[i]>b[n]){
               cnt = false; break;
            }
            if(a[i] <= b[n]){
            sum += 1; cnt = true; break;
            }
        }
        // cout << mx << endl;
        for(ll i=0;i<=n;i++){
            mn = min(mn,abs(a[i]-b[n]));
            if(i==n && cnt == true){
                
            // cout << mn << endl;
                sum+=mn;
            }
            else if(i == n && cnt == false){
                sum+=mn;
            }
            else{
            sum = sum+abs(a[i]-b[i]);
            }
            // cout << sum << " ";
        }
        cout << sum << endl;

        // for(ll i=0;i<=n;i++){
        //     cout << a[i] << " ";
        // }
       }

return 0;
}