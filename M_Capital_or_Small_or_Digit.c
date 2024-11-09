#include<stdio.h>
int main()
{
  char a;
  scanf("%c",&a);

  if(a>=65 && a<=90)
   {
    printf("ALPHA\nIS CAPITAL");
    printf("%d",a);
   }
   else if(a>=90 && a<=122)
   {
    printf("ALPHA\nIS SMALL");
   }
   else
   {
    printf("IS DIGIT");
   }

return 0;
}