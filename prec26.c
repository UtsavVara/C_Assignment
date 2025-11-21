
#include <stdio.h>
#include <math.h>

int is_valid_triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 0;
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    return 1;
}

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    float a, b, c;
    printf("Please Enter value of side A , B , and C\n");
    scanf("%f%f%f", &a, &b, &c);

    if (!is_valid_triangle(a, b, c)) {
        printf("Invalid Triangle, the lengths do not form a valid triangle\n");
        return 1;
    }

    float area = triangle_area(a, b, c);
    printf("Valid Triangle, Area is %0.2f\n", area);
    printf("Name: utsav vara ID: 25CE134\n");

    return 0;
}
