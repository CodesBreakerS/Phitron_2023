#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 
int main()
{
    int n;
    scanf("%d",&n);
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%c",&a[i][j]);
        }
    } 
    int k=(n/2);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==k || j==k)
            {
            printf("#");
            }
            else printf("*");
        }
        printf("\n");
    }

return 0;
}