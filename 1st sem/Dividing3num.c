#include <stdio.h>
int main() {
    int a, b, c, d;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter Third Number: ");
    scanf("%d", &c);

    if (b == 0 || c == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    d = a / b / c;
    printf("Division Of Three Numbers: %d\n", d);
    return 0;
}
