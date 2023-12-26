#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 
int main()
{
    ///**************************Not completed****************
    int n,cmt=0,cnt=0;
    scanf("%d",&n);
    int m[n][n];
    int i,j;
    for( i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
            if(i==j && m[i][j]==1)
            {
                cmt++;
            }
            else if(m[i][j]==1)
            {
                cnt++;
            }
        }
    } 
    int s=cmt+cnt;
    if(s==n)
    {
        printf("YES");
    }
    else printf("NO");
return 0;
}