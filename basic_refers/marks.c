#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark: ");
    scanf("%d", & mark);
    if(mark>=90 && mark<=100)
    {
        printf("A grade\n");
    }
    else if(mark>=80 && mark<=89) 
    {
        printf("B Grade \n");

    }
    else if (mark>=70 &&  mark<=79)
    {
        printf("C grade \n");

    }
    else if (mark>=60 && mark<=69)
    {
        printf("D grade \n");
        
    }
    else if (mark>=50 && mark<=59)
    {
        printf("E grade \n");
    }
    else if( mark<50)
    {
        printf("fail \n");
    }
    return 0;
}