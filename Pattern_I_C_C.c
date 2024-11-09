#include<stdio.h>
int main()
{
    
int n,k=1;
scanf("%d",&n);
int s=n-1;
for(int i=1;i<=n;i++)
{
    for(int l=1;l<=s;l++)
    {
        printf(" ");
    }
    s--;
    for(int j=1;j<=k;j++)
    {
        printf("*");
    }
    k++;
    printf("\n");
}
    return 0;
}