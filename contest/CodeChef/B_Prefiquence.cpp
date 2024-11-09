#include<bits/stdc++.h>
using namespace std;

int ans(string a,string b,int n, int m){
    int i=0,j=0,c =0;
        while(i<n && j<m){
            if(a[i] == b[j]){
                i++;
                c++;
            }
            j++;
        }
        return c;
}

int main()
{
       int t; cin >> t;
       while(t--){
        int n,m; cin >> n >> m;
        string a,b; cin >> a >> b;
        int c = ans(a,b,n,m);
        cout << c << endl;
       }

return 0;
}