#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,c=0,flag=-1;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        int s;
        scanf("%d",&s);
        for(int i=0;i<n;i++)
        {
            if(s==a[i])
            {
                c=i+1;
                flag=0;
                break;
            }
        }
        if(flag==-1)
        printf("Case %d: Not Found\n",i+1);
        else 
        printf("Case %d: %d\n",i+1,c);
    } 
return 0;
}