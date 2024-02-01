#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int sum);

int input_array_size()
{
    int n;
    printf("How many numbers you want to add-");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the %d number-",i+1);
        scanf("%d",&a[i]);
    }
}

int sum_n_array(int n, int a[n])
{
    int sum=0,i;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    return sum;
}

void output(int n,int sum)
{
    printf("The sum of those %d numbers is %d",n,sum);
}

int main()
{
    int n,sum,a[25];
    n=input_array_size();
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,sum);
    return 0;
}