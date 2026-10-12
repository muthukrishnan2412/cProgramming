
// Area of the rectangle
#include<stdio.h>
int main()
 {
    
    float length, width, area,perimeter;

    // Ask the user to give input the length
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Ask the user to input the width
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area and perimeter
    area = length * width;
    perimeter=2*(length + width);

    // Display the result 
    printf("The area of the rectangle is: %f\n",area);
    printf("The perimeter of the rectangle is: %f\n",perimeter);
    return 0;
}
