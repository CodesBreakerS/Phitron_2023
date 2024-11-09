#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
       string s,x;
       for(int i=1;i<=t;i++)
       {
        cin >>s; 
        cin >> x;
        cin.ignore();
        int size=x.size();
       while(s.find(x)!=-1)
       {
        s.replace(s.find(x),size,"$");
       }
       cout << s << endl;
       }
return 0;
}