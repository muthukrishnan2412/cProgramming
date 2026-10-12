#include<stdio.h>
int main()
{
    int hour;
    printf("Enter the hour(0-23):");
    scanf("%d",&hour);
    if(hour>5 && hour<11)
        {
        printf("Good morning!");
        }
    else if(hour>12 && hour<15)
        {
        printf("Good afternoon!");
        }
    else if(hour>16 && hour<21)
        {
        printf("Good evening!");
        }
    else if(hour>22 && hour<4)
        {       
        printf("Good night!");
        }
    else if(hour>23)
        {
        printf("Invalid hour!");
        }
    return 0;
    
}