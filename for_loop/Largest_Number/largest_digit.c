#include <stdio.h>

int main() {
    int number, largest, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    largest = 0;

    while (number > 0) {
        digit = number % 10;
        if (digit > largest) {
            largest = digit;
        }
        number /= 10;
    }

    printf("Largest digit: %d\n", largest);
    return 0;
}
