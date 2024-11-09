#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while (t--) {
        long long a,b,k;
     cin >> a >> b >> k;
    long long count(0);
     while(1){
        if(b/k<a) break;
        if(b%k==0){
            b/=k;
            count++;
        }else{if(b-b%k<a) break;
            else{
                count+=b%k;
                b-=b%k;
            }
        }
     } 
     count+=b-a;
     cout << count  << endl;
    }
}
