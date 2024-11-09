#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int div =a/1000;
  if(div%2==0)
   printf("EVEN");
  else
   printf("ODD");
return 0;
}