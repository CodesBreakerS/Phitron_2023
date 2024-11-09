#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t; cin >> t;
       int a,b;
       while(t--){
        cin >> a >> b;
        int ad = a/10;
        int ar = a%10;
        int bd = b/10;
        int br = b%10;
        if(a>b || ((ar*10)+ad)>b || a>((br*10)+bd) || ((ar*10)+ad)>((br*10)+bd)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
       }

return 0;
}