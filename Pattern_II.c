#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int s=n-1,k=1;
  
  for(int i=1;i<=n;i++)
  {
    for(int l=1;l<=s;l++)
    {
        printf(" ");
    }
    s--;
    for(int j=0;j<=k*2-2;j++)
    {
      if(i%2==0)  printf("*");
      else printf("^");
    }
    k++;
    printf("\n");
  }

return 0;
}