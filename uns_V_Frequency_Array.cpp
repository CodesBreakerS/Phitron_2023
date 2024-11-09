#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n,t;
       cin >> n >> t;
       vector<int>a;
       int cnt=0;
       for(int i=0;i<n;i++)
       {
        
        int x;
        cin >> x;
        a.push_back(x);
       }

       sort(a.begin(),a.end());
        int p=1;
       // int cnt=0;
       while(1)
       {
        if(p>t) break;
        for(int i=0;i<n;i++)
        {
            
            if(a[i]==p)
            {
                cnt++;
            }else if (a[i]!=p)
            {
                p++;
                cout << cnt <<endl;
                cnt=0;
                if(a[i]==p) cnt++;
                else break;
            }
            else break;   
        }
        
       }

return 0;
}