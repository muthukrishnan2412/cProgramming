#include<stdio.h>
int main()
{
    int time;
    printf("Enter the time: ");
    scanf("%d", &time);
    if(time>=0 && time<=11)
    {
        printf("good morning \n");
    }
    else if(time>=12 && time<=15) 
    {
        printf("good afternoon \n");

    }
    else if (time>=16 &&  time<=19)
    {
        printf("good evening \n");

    }
    else if (time>=20 && time<=24)
    {
        printf("good night \n");
        
    }
    return 0;
}