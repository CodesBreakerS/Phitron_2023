#include<stdio.h>
#include<string.h>
int main()
{
  int t;
  scanf("%d",&t);
  char s[101];
  for(int i=1;i<=t;i++)
  {
    
     scanf("%s",s);
     
    int l=strlen(s);
    if(l<=10)
    {
        puts(s);
        //printf("\n");
    }
    else 
    {
        printf("%c%d%c\n",s[0],l-2,s[l-1]);
    }
  }

return 0;
}