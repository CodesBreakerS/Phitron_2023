#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
     int n;
     vector<long long>a;
        cin >> n;
     while(n--)
     {
        int x;
        cin >> x;
        a.push_back(x);
     }   
        sort(a.begin(),a.end());
        int cnt =0;
        for(int i=0;i<a.size();i++)
        {

            if(a[i]==a[i+1])
            {
                // i++;
                cnt++;
            }
        }

        cout << cnt << endl;
    }
       

return 0;
}