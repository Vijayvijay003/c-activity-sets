#include <stdio.h>

// com input_complex();
// com add_complex(com a, com b);
// void output(com a,com b,com sum);

typedef struct _complex {
	float r;
	float i;
}com;

com input_complex()
{
    com n;
    scanf("%f %f",&n.r,&n.i);
    return n;
}

com add_complex(com a, com b)
{
    com sum;
    sum.r=a.r+b.r;
    sum.i=a.i+b.i;
    return sum;
}

void output(com a,com b,com sum)
{
    printf("The sum of %.2f+%.2fi and %.2f+%.2fi in %.2f+%.2fi",a.r,a.i,b.r,b.i,sum.r,sum.i);
}

int main()
{
    com a,b,sum;
    printf("Enter the real and imaginary part of first number-");
    a=input_complex();
    printf("Enter the real and imaginary part of second number-");
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}