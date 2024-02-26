#include <stdio.h>
int input() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    return num1, num2;
}
int find_gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return find_gcd(b, a % b);
}
void output(int a, int b, int gcd) {
    printf("\nThe GCD of %d and %d is %d\n", a, b, gcd);
}

int main() {
    int num1, num2, gcd;
    
    num1 = input();
    num2 = input();
    
    gcd = find_gcd(num1, num2);
    
    output(num1, num2, gcd);
    
    return 0;
}