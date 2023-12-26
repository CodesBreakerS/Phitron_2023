#include<stdio.h>
int main()
{
  int n,e=0,od=0,p=0,ne=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

    if(a[i]>0)
    {
        p++;
        if(a[i]%2==0)
        {
            e++;
        }
        else od++;
    }
    else if(a[i]<0)
    {
        ne++;
        int m=a[i]*(-1);
        if(m%2==0)
        {
            e++;
        }
        else od++;
    }
    else if(a[i]==0)
    {
        e++;
    }
    
  }
  
   printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",e,od,p,ne);

return 0;
}