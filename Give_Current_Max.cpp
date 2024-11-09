#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n; cin >> n; 
       priority_queue<long long , vector<long long>, greater<long long>>q; 
       while(n--)
       {
        long long c; cin >> c;
        q.push(c);
       }
       
    int t; cin >> t;
    while(t--)
    {
        int t; cin >> t;
        if(t == 1)
        {
            if(q.size() == 0) cout << "Empty" << endl;
            else cout << q.top() << endl;
        }
        else if(t == 2)
        {
            q.pop();
            if(q.size() == 0) cout << "Empty" << endl;
            else 
            {
                cout << q.top() << endl;
            }
        }
        else if(t == 0)
        {
            long long x ; cin >> x; q.push(x);
             cout << q.top() << endl;
        }
    }
    
return 0;
}