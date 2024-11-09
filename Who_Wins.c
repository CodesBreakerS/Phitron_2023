#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 
int main()
{
    int n,a,b,t,p;
    scanf("%d",&n);
    t=p=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b) 
        {t++;
        }
        else if(a==b) 
        {
            t++; 
            p++;
        }
        else p++;
    }
    if(t>p) printf("Tiger");
    else if(t==p) printf("Draw");
    else printf("Pathan");
return 0;
}