//reverse the number
#include<stdio.h>
int main()

{   
    int num,rev;
    printf("Enter the number:  ");
    scanf("%d",&num);

    //reverse the number
     rev=((num %10)*10)+(num/10);
     printf("The reversed number: %d\n",rev);
     return 0;
}