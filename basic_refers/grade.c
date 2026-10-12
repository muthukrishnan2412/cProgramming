#include<stdio.h>
int main()
{
    int score,grade;
    printf("Enter the score: ");
    scanf("%d",&score);
    if (grade>90 && grade<100)
        {
            printf("Your grade is A");
        }
    else if (grade>80 && grade<89)
        {
            printf("your grade is B");
        }
    else if (grade>70 && grade<79)
        {
            printf("your grade is C");
        }
    else if (grade>60 && grade<69)
        {
            printf("your grade is D");
        }
    else if ( grade<60)
        {
            printf("your grade is F");
        }
    return 0;
}