#include <stdio.h>

// Define a structure for a complex number
struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;

// Function to get the value of n (number of complex numbers)
int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

// Function to input a single complex number
Complex input_complex() {
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

// Function to input an array of complex numbers
void input_n_complex(int n, Complex c[n]) {
    printf("Enter %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        c[i] = input_complex();
    }
}

// Function to add two complex numbers
Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

// Function to add n complex numbers
Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0}; // Initialize the sum to 0+0i
    for (int i = 0; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}

// Function to display the result
void output(int n, Complex c[n], Complex result) {
    printf("The sum of ");
    for (int i = 0; i < n; i++) {
        printf("%.1f+%.1fi", c[i].real, c[i].imaginary);
        if (i < n - 1) {
            printf(" + ");
        }
    }
    printf(" is %.1f+%.1fi\n", result.real, result.imaginary);
}

int main() {
    int n = get_n();
    Complex complex_numbers[n];
    
    input_n_complex(n, complex_numbers);
    
    Complex sum = add_n_complex(n, complex_numbers);
    
    output(n, complex_numbers, sum);

    return 0;
}