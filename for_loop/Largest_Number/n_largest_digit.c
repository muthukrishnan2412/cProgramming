#include <stdio.h>

#define MAX_DIGITS 10

int main() {
    char str[MAX_DIGITS + 1];
    size_t len = 0;
    int n, freq[10] = {0};
    int i, count = 0, digit, ch;

    printf("Enter a string of digits (max %d): ", MAX_DIGITS);
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (len >= MAX_DIGITS) {
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            break;
        }

        str[len++] = (char)ch;
    }

    if (len == 0) {
        printf("No input provided.\n");
        return 1;
    }
    str[len] = '\0';

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;
        }
    }

    for (digit = 9; digit >= 0; digit--) {
        count += freq[digit];
        if (n <= count) {
            printf("The %dth largest digit is: %d\n", n, digit);
            return 0;
        }
    }

    printf("N is greater than the total number of digits in the string.\n");
    return 0;
}
