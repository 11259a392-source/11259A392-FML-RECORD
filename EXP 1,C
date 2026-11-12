#include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside function (after swap): a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap in main: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap in main: x = %d, y = %d\n", x, y);

    return 0;
}

output:
Enter two numbers: 10 20
Before swap in main: x = 10, y = 20
Inside function (after swap): a = 20, b = 10
After swap in main: x = 20, y = 10
