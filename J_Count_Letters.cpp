#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cin >> a;
  int c[26]={0};
  for(int i=0;i<a.size();i++)
  {
    if(a[i]>='a' && a[i]<='z')
    {
    c[a[i]-'a']++;
    }
  }
  for(int i='a';i<='z';i++)
  {
    if(c[i-'a']>0)
    {
    printf("%c",i);
    cout << " " << ":" << " " << c[i-'a'] << endl;
    }
  }
return 0;
}