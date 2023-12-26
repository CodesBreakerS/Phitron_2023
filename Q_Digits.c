#include<stdio.h>
int main()
{
  long long int n;
  scanf("%lld",&n);
  long long int a[n];
  for(long long int i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
    long long int j=a[i];
    if(j==0)
    {
        printf("%d",j);
    }
    while(j!=0)
    {
        long long int k=j%10;
        printf("%lld ",k);
        j=j/10;      
    }
    printf("\n");
  }
return 0;
}