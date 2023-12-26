#include<stdio.h> //ifran's
//1.Has Return + Parameter
int add(int a,int b)
{
    int aa=a+b;
    return aa;
}
//2.Has Return + No Parameter
int sub()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ss=a-b;
    return ss;
}
//3.No Return + Parameter
  int mul(int a,int b)
  {
    int mul=a*b;
    printf("Multiplication of two numbers: %d\n",mul);
  }

  //4.No Return + No Parameter
  void div()
  {
    int a,b;
    scanf("%d %d",&a,&b);
    float dd=a*1.0/b*1.0;
    printf("Division of two numbers: %f",dd);
  }

int main()
{
    printf("1.Has Return + Parameter\n");
  int a,b;
  scanf("%d %d",&a,&b);
  int ad=add(a,b);
  printf("Addition of two numbers: %d\n",ad);

    printf("2.Has Return + No Parameter\n");
    int ss=sub();
    printf("Subtraction of two numbers: %d\n",ss);

    printf("3.No Return + Parameter\n");
    int x,y;
    scanf("%d %d",&x,&y);
    mul(x,y);

    printf("4.No Return + No Parameter\n");
    div();
return 0;
}