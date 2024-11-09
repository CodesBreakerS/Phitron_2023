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
    //    while(!q.empty())
    //    {
    //     long long a = q.top();
    //     q.pop();
    //     cout << a << " ";
    //    }
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
            
            // if(q.size() == 0) cout << "Empty" << endl;
            // else q.pop();
            if(q.size()!=0) q.pop();
            if(q.size() != 0) cout << q.top() << endl;
            else 
            {
                
                 cout << "Empty" << endl;
            }
        }
        else if(t == 0)
        {
            long long x ; cin >> x; q.push(x);
             cout << q.top() << endl;
        }
        else cout << "Empty" << endl;
    }
    
return 0;
}