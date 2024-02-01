#include<stdio.h>
int input()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    return x;
  }
int compare(int num1,int num2,int num3)
  {
    int larg;
   if(num1>num2 && num1>num3)
   {
        larg=num1;
   }
   if(num2>num1 && num2>num3)
   {
        larg=num2;
   }
   if(num3>num2 && num3>num1)
   {
        larg=num3;
   }
   return larg;
  }
  void output(int largest)
  {
    printf("largest is %d",largest);
  }
int main()
{
    int num1,num2,num3,largest;
   num1=input();
   num2=input();
   num3=input();
       largest=compare(num1,num2,num3); 
    output(largest);
    return 0;
}