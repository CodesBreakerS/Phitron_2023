#include<stdio.h>
#include<string.h>
int main()
{
    int c1,c2;
    c1=c2=0;
  char a[1001];
  scanf("%s",&a);
  for(int  i=0;i<strlen(a);i++)
  {
    if(a[i]>='a' && a[i]<='z')
    {
        c2++;
    }
    else
    {
        c1++;
    }
  }
  printf("%d %d",c1,c2);

return 0;
}