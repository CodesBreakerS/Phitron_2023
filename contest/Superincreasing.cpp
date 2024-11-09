#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long t;cin >> t;
    long long n,k,x;
    long long tmp;
    while(t--)
{
    cin >> n>>k>>x;

    if(x >= pow(2,k-1)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
}
