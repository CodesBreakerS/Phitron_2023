#include<stdio.h>
int main()
{
  
  int n,cnt=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  cnt=a[0];
  for(int i=1;i<n;i++)
  {
    if(cnt<a[i])
    {
      cnt=a[i];
    
    }
  }
  printf("%d ",cnt);
return 0;
}