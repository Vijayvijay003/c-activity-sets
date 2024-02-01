#include<stdio.h>
void input(int *num1,int *num2,int *num3)
{
    printf("enter the number");
    scanf("%d",num1);
    printf("enter the number");
    scanf("%d",num2);
    printf("enter the number");
    scanf("%d",num3);
  }
  void compare(int num1,int num2,int num3,int *larg)
  {
   if(num1>num2 && num1>num3)
   {
        *larg=num1;
   }
   if(num2>num1 && num2>num3)
   {
        *larg=num2;
   }
   if(num3>num2 && num3>num1)
   {
        *larg=num3;
   }
  }
  void output(int *larg)
  {
    printf("largest is %d",*larg);
  }
int main()
{
    int a,b,c,larg;
    input(&a,&b,&c);
    compare(a,b,c,&larg);  
    output(&larg);
    return 0;
}