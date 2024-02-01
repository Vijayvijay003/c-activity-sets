#include <stdio.h>
void input(int *a, int *b)
{
     int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    *a=x;
    *b=y;
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("the sum of %d and %d is %d ",a,b,sum);
}
int main()
{  int a,b,sum;
    printf("enter two number : ");
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}