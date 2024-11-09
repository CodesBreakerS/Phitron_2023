#include<bits/stdc++.h>
using namespace std;

int main()
{
     string a;
     cin >> a;
    
    while(a.find("EGYPT")!=-1)
    {
        a.replace(a.find("EGYPT"),5," ");
        
    }
    cout << a;

return 0;
}