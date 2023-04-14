#include<stdio.h>
int main()
{
    long long int n,m,sum=0;
    scanf("%lld",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
     scanf("%lld",&m);
     a[i]=m;
     sum+=a[i];
  }
  if(sum<0)
  {
    long long int mul=(-1)*sum;
    printf("%lld",mul);
  }
  else{
    printf("%lld",sum);
  }

return 0;
}