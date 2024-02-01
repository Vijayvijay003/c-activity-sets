#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int input_n()
{
    int n;
    printf("Till what number you want sum of-");
    scanf("%d",&n);
    return n;
}

int sum_n_nos(int n)
{
    int sum,i;
    sum=0;
    for(i=0;i<=n;i++)
    sum=sum+i;
    return sum;
}

void output(int n, int sum)
{
    printf("The sum of first %d numbers is %d",n,sum);
}

int main()
{
    int n,sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}