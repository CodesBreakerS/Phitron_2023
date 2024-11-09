#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int k=n,s=0;

  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<s;j++)
    {
        printf(" ");
    }
    s++;
    for(int l=1;l<=k*2-1;l++)
    {
        printf("*");
    }
    k--;
    printf("\n");
    
  }
return 0;
}