#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin >> n;
       vector<int>a(n);
       for(int i=0;i<n;i++)
       {
        int val;
        cin >> val;
        a[i]=val;
       }
        auto mx=max_element(a.begin(),a.end());
        auto it = find(a.begin(),a.end(),*mx);
        int index;
        if(it != a.end())
        {
            index = it - a.begin();
           // cout << index;
        }
        int i=index-1;
        int j=index;
        int cnt=0;
        while(1)
        {
            if(i==-1)
            {
                break;
            }
            else if(a[i]<a[j])
            {
                swap(a[i],a[j]);
                i--;j--;
                cnt++;
            }
            else{
                i--;j--;
            }
            
        }
        // a.erase(a.begin()+*mx);
        // a.insert(a.begin()+0,*mx);

        auto mn=min_element(a.begin(),a.end());
        auto in = find(a.begin(),a.end(),*mn);
        int ind;
        if(in != a.end())
        {
            ind=  in- a.begin()  ;
            //cout << " " << ind;
        }      
        int x=ind;
        int y=ind+1;
        while(1)
        {
            if(y==n)
            {
                break;
            }
             else if(a[x]==a[y])
            {
                x++;y++;
             //   cnt--;
            }
            else if(a[i]>a[j])
            {
                swap(a[x],a[y]);
                x++;y++;
                cnt++;
            }
            else{
                i++;j++;
            }
            
        }
       cout << cnt; 
    //    for(int x:a)
    //    {
    //     cout << x << endl;
    //    }

return 0;
}