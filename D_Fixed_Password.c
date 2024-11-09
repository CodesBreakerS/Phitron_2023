#include<stdio.h>
int main()
{
   int n[5],pass=1999;
   for(int i=0;i<5;i++)
   {
    scanf("%d",&n[i]);
    if(n[i]==pass)
    {
        printf("Correct");
        break;
    }
    else printf("Wrong\n");
   }
   
return 0;
}