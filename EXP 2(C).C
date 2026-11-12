#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %.2f\n", area);

    return 0;
}

output:
Enter the three sides of the triangle: 3 4 5
Area of the triangle = 6.00
