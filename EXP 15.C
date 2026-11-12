#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;   // points to arr[0]

    printf("Using pointer arithmetic:\n");

    for (int i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i, *(p + i));
    }

    return 0;
}

output:
Using pointer arithmetic:
Element 0 = 10
Element 1 = 20
Element 2 = 30
Element 3 = 40
Element 4 = 50
