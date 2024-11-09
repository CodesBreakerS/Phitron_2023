#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

string order(string s,int n){
    unordered_map<char,int> a;
    string r = "";
    for(int i=0;i<n;i++){
        if(a.find(s[i]) == a.end()){
            r.push_back(s[i]);
            r[s[i]]++;
        }
    }
    return r;

}

int main()
{
    int t; cin >> t;
    while(t--){
        int n;string s; cin >> n >> s;
        string r = order(s,n);
        cout << r << endl;

    }

return 0;
}