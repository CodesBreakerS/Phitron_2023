#include<stdio.h> //ifran's
int add(int *a,int *b)
{
    int aa=*a+*b;
    return aa;
}

int main()
{
    
  int a,b;
  scanf("%d %d",&a,&b);
  int ad=add(&a,&b);
  printf("Addition of two numbers: %d\n",ad);

  return 0;
}