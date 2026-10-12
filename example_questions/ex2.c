
//find the square and the cube of the Number
#include <stdio.h>

int main()
 {
    int num, square, cube;

    // Ask the user to input a number
    printf("Enter an Number: ");
    scanf("%d", &num);

    // Calculate square and cube
    square = num * num;
    cube = num * num * num;

    
    printf("Square is: %d\n", square);
    printf("Cube is: %d\n", cube);

    return 0;
}
