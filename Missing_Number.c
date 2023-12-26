#include<stdio.h>
#include<stdlib.h>
int main()
{
  int t;
  long long int s,a,b,c,ad,ans;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
    s=a=b=c=ad=ans=0;
    scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
    ad=(a+b+c);
    ans=s-ad;
    printf("%lld\n",ans);
  }
return 0;
}