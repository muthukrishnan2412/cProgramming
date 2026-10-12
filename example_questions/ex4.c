#include <stdio.h>

int main() {
    float principal, interest, simple_interest,year;

    // Reading inputs from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the  interest : ");
    scanf("%f", &interest);

    printf("Enter the year: ");
    scanf("%f", &year);

    // Calculating simple interest
    simple_interest = (principal * interest * year) / 100;

    // Displaying the result up to 2 decimal places
    printf("\n--- Result ---\n");
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
