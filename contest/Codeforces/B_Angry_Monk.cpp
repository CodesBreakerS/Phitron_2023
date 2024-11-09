#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
 
 
int main()
{
       int t; cin >> t;
       while(t--){
        long long n,k; cin >> n >> k;
        vector<long long> a(k);
        for(long long i=0;i<k;i++){
            cin >> a[i];
        }
        // cout << a.end();
        sort(a.begin(),a.end(), greater<int>());
        
        // if(a.end() == 1){
        //         a[0] = a[0]+1;
        //         a.pop_back();
        //     }
        // for(auto &i:a){
        //     cout << i << " ";
        // }
        // cout << endl;
        int cnt =0;
        while(a.size()!=1){
            
            if(a[a.size()-1]!=1){
                a[a.size()-1] = a[a.size()-1]-1;
                a.push_back(1);
                // k++;
                 cnt++;
            }
            else {
                a[0] = a[0]+1;
                a.pop_back();
                // k--;
                cnt++;
            }
        }
        cout << cnt << endl;
 
       }
 
return 0;
}