#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) {
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", x2, y2);
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    float d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float d3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    if (d1 + d2 > d3 && d1 + d3 > d2 && d2 + d3 > d1) {
        return 1;
    } else {
        return 0;
    }
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) {
    if (result) {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    } else {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    int result;

    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);

    return 0;
}