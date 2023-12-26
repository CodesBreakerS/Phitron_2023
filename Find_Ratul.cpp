#include<bits/stdc++.h>
using namespace std;

int main()
{
     string a;
     getline(cin,a);
    string s="Ratul";
    int n=a.find(s);
    if(n<0)
    {
        cout << "NO";
    }
    else 
    {
        if(a[n+5]!=' ' && n+5!=a.size()) cout << "NO";
        else if(a[n-1]!=' ' && n-1>=0 )
        {
            cout << "NO";
        }
        else cout << "YES";
    }

return 0;
}