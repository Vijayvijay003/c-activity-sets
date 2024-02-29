#include <stdio.h>
#include <stdbool.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int input_array_size() {
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n]) {
    for (int i = 2; i <= n; i++) {
        a[i] = 1;
    }
}

void erotosthenes_sieve(int n, int a[n]) {
    for (int p = 2; p * p <= n; p++) {
        if (a[p] == 1) {
            for (int i = p * p; i <= n; i += p) {
                a[i] = 0;
            }
        }
    }
}

void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = input_array_size();
    int a[n + 1];
    init_array(n, a);
    erotosthenes_sieve(n, a);
    output(n, a);
    return 0;
}