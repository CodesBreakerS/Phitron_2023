#include<bits/stdc++.h>
using namespace std;
void swap (int a[], int i,int j)
{
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}
int partition (int a[],int f,int l)
{
    int paivot = a[l];
    int i = f-1;
       for(int j = f;j<l;j++)
       {
        if(a[j]<paivot)
        {
            i++;
            swap(a,i,j);
        }
    }

    swap(a,i+1,l);
    return i+1;
}
void quick_sort(int a[],int f,int l)
{
    if(f<l)
    {
        int j = partition(a,f,l);
        quick_sort(a,f,j-1);
        quick_sort(a,j+1,l);
    }
}
int main()
{
       int n; cin >> n;
       int a[n];
       for(int i = 0 ;i<n;i++)
       {
        cin >> a[i];
       }
       int f = 0; 
       int l = n-1;
       quick_sort(a,f,l);
       for(int i = 0;i<n;i++)
       {
        cout << a[i] << " ";
       }

return 0;
}