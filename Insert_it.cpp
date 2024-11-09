#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n; int m; int x;
       vector<int>a;
       cin >> n;
       //taking input for vector a;
       while(n--)
       {
        int x;
        cin >> x;
        a.push_back(x);
       }

       vector<int>b;
        cin >> m;
        //taking input for vector b;
       for(int i=1;i<=m;i++)
       {
        int x;
        cin >> x;
        b.push_back(x);
       }

       //taking input the position for insert b vector into a vector;
       cin >> x;
 
       a.insert(a.begin()+x,b.begin(),b.end());

       // printing the modified vector;
       for(auto it=a.begin();it<a.end();it++)
       {
        cout << *it << " ";
       }

return 0;
}