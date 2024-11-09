#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7; int nums[N];

void merge(int L[],int R[],int l1,int r1,int l2,int r2)
{
    L[r1+1] = INT_MIN;
    R[r2+1] = INT_MIN;
    int lp =0,rp=0;
    for(int i =0;i<=(r1+r2+1);i++)
    {
        if(L[lp] >= R[rp])
        {
            nums[i] = L[lp];
            lp++;
        }
        else 
        {
            nums[i] = R[rp];
            rp++;
        }
    }

}

int main()
{
    int n; cin >> n; int L[n];
       for(int i = 0;i<n; i++) cin >> L[i];

    int m; cin >> m; int R[m];
       for(int i = 0;i<m; i++) cin >> R[i];   

       merge(L,R,0,n-1,0,m-1);

       for(int i = 0;i<(n+m); i++) cout << nums[i] << " ";

return 0;
}