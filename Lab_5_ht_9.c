#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, sum;
    printf("Enter the number of terms ");
    scanf("%d", &n);

    printf("Fibonacci Sequence:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }

    return 0;
}
