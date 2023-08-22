#include <stdio.h>

int main() {
    char op;
    double a, b, c;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+':
            c = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", a, b, c);
            break;
        case '-':
            c = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", a, b, c);
            break;
        case '*':
            c = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", a, b, c);
            break;
        case '/':
            if (b != 0) {
                c = a / b;
                printf("%.2lf / %.2lf = %.2lf\n", a, b, c);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

