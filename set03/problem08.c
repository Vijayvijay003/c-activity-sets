#include <stdio.h>
#include <math.h>

typedef struct point {
    float x;
    float y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

// Function to get a valid number of sides (at least 3)
int input_n() {
    int n;
    do {
        printf("Enter the number of sides in the polygon (at least 3): ");
        scanf("%d", &n);
    } while (n < 3);
    return n;
}

// Function to get a point from the user
Point input_point(char *prompt_msg) {
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

// Function to get all polygon vertices from the user
int input_polygon(Polygon *p) {
    p->sides = input_n();

    for (int i = 0; i < p->sides; i++) {
        printf("Enter coordinates of point %d: ", i + 1);
        p->p[i] = input_point("");
    }

    return 1; // Success
}

// Function to calculate the Euclidean distance between two points
float find_distance(Point a, Point b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

// Function to calculate the perimeter of the polygon
void find_perimeter(Polygon *p) {
    p->perimeter = 0;
    for (int i = 0; i < p->sides; i++) {
        int next_i = (i + 1) % p->sides; // Wrap around for last side
        p->perimeter += find_distance(p->p[i], p->p[next_i]);
    }
}

// Function to print the perimeter
void output(Polygon p) {
    printf("Polygon perimeter: %.2f\n", p.perimeter);
}

int main() {
    Polygon polygon;
    if (input_polygon(&polygon)) {
        find_perimeter(&polygon);
        output(polygon);
    }
    return 0;
}