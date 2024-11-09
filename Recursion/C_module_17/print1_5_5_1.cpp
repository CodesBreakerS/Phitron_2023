#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

void print1(int n)
{
    if(n == 0 ) return;
    cout << n << " ";
    print1(n-1);
    // cout << endl;
    cout << n << " ";

}

int main()
{
       int n; cin >> n;
       print1(n);
       cout << endl;

return 0;
}