#include<bits/stdc++.h>
using namespace std;
int a[100];

int partition (int a[],int f,int l)
{
    int paivot = a[f];
    int i = f+1;
    int j = l; 
    while(i<j)
    {
         while (a[i]<paivot)
         {
            i++;
         }
        while(a[j]>paivot){
            j--;
        }
       
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[f],a[j]);
    return j;
}

void quick_sort(int f,int l)
{
    if(f<l)
    {
        int j = partition(a,f,l);
        quick_sort(f,j-1);
        quick_sort(j+1,l);
    }
}

int main()
{
       int n; cin >> n;
        a[n];
       for(int i = 0 ;i<n;i++)
       {
        cin >> a[i];
       }
       int f = 0; 
       int l = n-1;
       quick_sort(f,l);
       for(int i = 0;i<n;i++)
       {
        cout << a[i] << " ";
       }
       for(int i = 0;i<150;i++
       ){cout << endl;}

return 0;
}