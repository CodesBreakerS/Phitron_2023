#include<stdio.h>
int main()
{
    int c=0;
  char a[1001];
  scanf("%s",a);
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]=='a' || a[i]=='e'|| a[i]=='i' || a[i]=='o'|| a[i]=='u')
    {
        c++;
    }
  }
  printf("%d",c);
return 0;
}