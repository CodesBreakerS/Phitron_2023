#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin >> n;
       


       int p;
       cin >> p;
       vector<int>a;
       for(int i=0;i<p;i++)
       {
        int x;
        cin >> x;
        a.push_back(x);
       }

       int q;
       cin >> q;
       for(int i=0;i<q;i++)
       {
        int x;
        cin >> x;
        a.push_back(x);
       }

       sort(a.begin(),a.end());
       int f=1;
       int i=1;
       while(i<=a.size())
       {
        auto it=find(a.begin(),a.end(),f);
        if(*it==f) f++;

        i++;
       }
       
        if(f-1==n)
        {
          cout << "I become the guy.";
        }
        else cout << "Oh, my keyboard!";
    return 0;
}