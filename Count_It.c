#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 
int main()
{
    char a[1001];
    int c,sm,s;
    c=sm=s=0;
    fgets(a,1001,stdin);

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z') sm++;
        else if(a[i]>='A' && a[i]<='Z') c++;
        else if(a[i]==' ') s++;
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",c,sm,s);

return 0;
}