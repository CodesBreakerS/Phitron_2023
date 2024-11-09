#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int fibi (int n)
{
    // if(n == 0 || n == 1) return 1;
    // int k = fibi(n-1);
    // int l = fibi(n-2);
    // return k+l;

            // Clear way
    if(n<=1) return 1;
    return fibi(n-1)+fibi(n-2);
}

int main()
{
       int n; cin >> n;
        cout << fibi(n);

return 0;
}