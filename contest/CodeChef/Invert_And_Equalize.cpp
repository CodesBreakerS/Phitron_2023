#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int main() {
    int t; cin >> t;
    while(t--){
        string s; int n; cin >> n >> s;
        int cnt=0,cnt1=0;
        for(int i=0;i<n-1;i++){
            
            if(s[i] == '0' && s[i+1] == '1'){
                if(cnt ==0 && cnt1==0){
                    cnt1++;
                }
                cnt++;
                
            }
            if(s[i] == '1' && s[i+1] == '0'){
                if(cnt ==0 && cnt1==0){
                    cnt++;
                }
                cnt1++;
            }
        }
        // cout << cnt << " " << cnt1 << endl;
        cout << min(cnt,cnt1) << endl;
    }

}
