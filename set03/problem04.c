#include <stdio.h>

int input() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0;
        int b = 1;
        int fibo;
        for (int i = 2; i <= n; i++) {
            fibo = a + b;
            a = b;
            b = fibo;
        }
        return fibo;
    }
}

void output(int n, int fibo) {
    printf("The %dth number in the fibonacci sequence is %d.\n", n, fibo);
}

int main() {
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}