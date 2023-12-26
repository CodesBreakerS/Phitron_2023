#include<stdio.h>
int main()
{
  int n,f;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    int m;
    scanf("%d",&m);
    a[i]=m;
  }
  scanf("%d",&f);
  int c;
  c=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==f)
    {
        c++;
    }
  }
  printf("%d",c);
return 0;
}