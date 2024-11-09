#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 
int main()
{
    long long int a,n,s,remainder=0;
    scanf("%lld",&a);

    while(a--)
    {
        char n;
        scanf("\n%c",&n);
        remainder+=n-'0';
    }

    
    printf("%lld",remainder);
return 0;
}