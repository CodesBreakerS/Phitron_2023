#include<bits/stdc++.h>
using namespace std;

int main()
{
       vector<int>a;
       int t;
       cin >> t;
       while(t--)
       {
        int x;
        cin >> x;
        a.push_back(x);
       }
       
       int p;
       cin >> p;
       a.insert(a.begin()+p,200);

       auto it = find(a.begin(),a.end(),9);
       cout << *it << endl;
       
       for(auto i:a)
       {
        cout << i << " ";
       }

return 0;
}