#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t; cin >> t;
        int n,l,r;
        
        
       while(t--){
        int mx=0,mn=0,cnt=0;
        cin >> n >> l >> r;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];

        if(a[i]>=l && a[i]<=r){
            cnt++;
            if(cnt>mx){
                mx=cnt;
            }
        }else{
            cnt--;
            if(cnt<mn){
                mn=cnt;
            }
        }
            
        }
        cout << mx << " " << mn << endl;

       }

return 0;
}