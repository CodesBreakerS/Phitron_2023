#include<stdio.h>
void rec(int i)
{
    if(i==0) return;
    printf("%d ",i);
    rec(i-1);
}
int main()
{
    int i;
    rec(5);
  
return 0;
}