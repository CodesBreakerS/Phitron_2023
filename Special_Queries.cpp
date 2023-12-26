#include<bits/stdc++.h>
using namespace std;

int main()
{
       queue<string>q;
       int t;
       cin >> t;
       while(t--)
       {
        int n; string s;
        cin >> n;
        if(n==1)
        {
            if(q.empty()) 
            {
                cout << "Invalid" << endl;
                
            }
            else{
            cout << q.front() << endl;
            q.pop();
           // break;
            }
        }
        else{
        cin >> s;
        q.push(s);
        }
       }

return 0;
}