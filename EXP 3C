#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c to avoid input issues

    switch(op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}

output:
Enter two numbers: 12.5 4
Enter operator (+, -, *, /): *
Result = 50.00
