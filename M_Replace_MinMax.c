#include<stdio.h>
int main()
{
  
   int n,max=0,m=0,min=11000,mi=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    if(max<a[i])
    {
      max=a[i];
      m=i;
    }
    else if(a[i]<min)
    {
        min=a[i];
        mi=i;
    }  
  }
  int temp=a[m];
    a[m]=a[mi];
    a[mi]=temp;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
  
return 0;
}