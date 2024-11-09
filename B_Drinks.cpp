#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin >> n;
       double sum;
       //vector<int>d;
       for(int i=1;i<=n;i++)
       {
        int p;
        cin >> p;
        //d.push_back(p);
        sum+=p;
        //cout << sum << endl;
       }
       sum=sum/n;
       cout << fixed << setprecision(12) << sum;

return 0;
}