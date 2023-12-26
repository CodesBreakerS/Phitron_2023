#include<stdio.h>
#include<string.h>
int main()
{
  char a[1002];
  scanf("%s",a);
  int c[26]={0};
  int s=strlen(a);
  for(int i=0;i<s;i++)
  {
    if(a[i]>='a' && a[i]<='z')
    {
    c[a[i]-'a']++;
    }
  }
  for(int i='a';i<='z';i++)
  {
    int alp=i+'a';
    printf("%c - %d\n",alp,c[i]);
  }
return 0;
}