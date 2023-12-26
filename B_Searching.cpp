#include<bits/stdc++.h>
using namespace std;
int search(int *a,int n,int k)
{
    int flag=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return i;
    }
    else 
    {
        return -1;
    }

}
int main()
{
   int n;
   cin >> n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin >> a[i];
   }
   int x;
   cin >> x;

   int c=search(a,n,x);
   cout << c;

}