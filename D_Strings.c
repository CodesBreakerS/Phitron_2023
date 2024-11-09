#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 
int main()
{
    char a[22],b[11];
    scanf("%s",a);
    scanf("%s",b);
    int n=strlen(a);
    int m=strlen(b);
    printf("%d %d\n",n,m);
    char c[11];
    strcpy(c,a);
    printf("%s\n",strcat(a,b));
    char temp;
    temp=c[0];
    c[0]=b[0];
    b[0]=temp;

    printf("%s %s",c,b);

return 0;
}