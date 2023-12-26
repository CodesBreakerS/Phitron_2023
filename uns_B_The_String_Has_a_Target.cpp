#include<bits/stdc++.h>
using namespace std;

string minimal(int n,string a)
{
 char c=a[0];
 for(char x:a)
 {
    if(x<c)
    {
        c=x;
    }
 }
 int cnt=0;
 for(char x:a)
 {
    if(x==c)
    { cnt ++;}
 }
 string b= "string(cnt,c)";

 for(char x:a)
 {
    if(x!=c)
    {
        b=b+x;
    }
 }
 return b;

}

int main()
{
       int t;
       cin >> t;
       for(int i=1;i<=t;i++)
       {
        int n;
        cin >> n;
        cin.ignore();
        string a;
        cin >> a;

        string result = minimal(n,a);
        
        cout << result << endl;
       }
       

return 0;
}