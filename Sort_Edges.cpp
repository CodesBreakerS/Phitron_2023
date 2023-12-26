#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;  typedef pair<long,long>pll;
typedef vector<pii>vpii;   typedef vector<pll>vpll;
typedef vector<int>vi;     typedef vector<string>vs;      typedef vector<bool>vb;


int main()
{
    int t; cin >> t;
    int n = t;
    priority_queue<pll , vpll , greater<pll>>pq; 
    while(t--)
    {
       long long n,m; cin >> n >> m;
       pq.push({n,m});
    }
    while(n--)
    {
        pii v = pq.top();
        cout << v.first << " " << v.second << endl;
        pq.pop();
    }
       

return 0;
}