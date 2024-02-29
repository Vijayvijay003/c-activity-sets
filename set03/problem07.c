#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point() {
    Point p;
    printf("Enter coordinates (x, y): ");
    scanf("%f %f", &p.x, &p.y);
    return p;
}

Line input_line() {
    Line l;
    printf("Enter coordinates of point 1: ");
    l.p1 = input_point();
    printf("Enter coordinates of point 2: ");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l) {
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->distance = sqrt(dx * dx + dy * dy);
}

void output(Line l) {
    printf("Line distance: %.2f\n", l.distance);
}

int main() {
    Line line = input_line();
    find_length(&line);
    output(line);
    return 0;
}