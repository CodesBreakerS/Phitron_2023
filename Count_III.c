#include<stdio.h>
#include<string.h>
int main()
{
  char a[1002];
  scanf("%s",a);
  int c[26]={0};
  for(int i=0;i<strlen(a);i++)
  {
    if(a[i]>='a' && a[i]<='z')
    {
    c[a[i]-'a']++;
    }
  }
  for(int i='a';i<='z';i++)
  {
    printf("%c - %d\n",i,c[i-'a']);
  }
return 0;
}