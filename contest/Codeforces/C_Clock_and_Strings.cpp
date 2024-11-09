#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool ans = false;
        if(a<b){
            if(c>a && c < b){
                if(d>a && d<b){
                    ans = false;
                }
                else {
                    ans = true;
                }
            }
            if(d>a && d<b){
                if(c>a && c<b){
                    ans = false;
                }
                else {
                    ans = true;
                }
            }
        }
        else{
            if(c<a && c > b){
                if(d<a && d>b){
                    ans = false;
                }
                else {
                    ans = true;
                }
            }
            if(d<a && d>b){
                if(c<a && c>b){
                    ans = false;
                }
                else {
                    ans = true;
                }
            }
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}