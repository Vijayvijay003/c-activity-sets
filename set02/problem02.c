#include <stdio.h>

int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a == b || b == c || a == c) {
        return 0;
    } else {
        return 1;
    }
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("The triangle with sides %d, %d and %d is scalene.\n", a, b, c);
    } else {
        printf("The triangle with sides %d, %d and %d is not scalene.\n", a, b, c);
    }
}

int main() {
    int a, b, c, isscalene;
    a = input_side();
    b = input_side();
    c = input_side();
    isscalene = check_scalene(a, b, c);

    output(a, b, c, isscalene);

    return 0;
}