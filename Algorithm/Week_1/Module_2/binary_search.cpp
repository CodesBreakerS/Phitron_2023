#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7; int a[N];
int k;
bool search(int l,int r,int x)
{
    int mid = (l+r)/2;
    if(a[mid]== x) 
    { k=mid; return true;}
    if(l<r){
    if(a[mid]>x) search(l,mid,x);
    else search(mid,r,x);
    }
    else return false;
}
int main()
{
       int n;cin >> n; for(int i =0 ;i<n; i++) cin >> a[i];
       int x; cin >> x;

        bool a = search(0,n-1,x);
        if(a == false) cout <<"NOT FOUND" ;
        else cout << k;

return 0;
}