#include<stdio.h>
int main()
{
  int n,sum1=0,sum2=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    int m;
    scanf("%d",&m);
    a[i]=m;

    if(a[i]%2==0)
    {
        sum1+=a[i];
    }
    else{
        sum2+=a[i];
    }
  }

  printf("%d %d",sum1,sum2);
return 0;
}