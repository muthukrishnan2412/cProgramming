
//Find th4e last digit in the number
#include<stdio.h>
int main()
{
    int num,mod;
    printf("Enter the number: ");
    scanf("%d",&num);
    // modulus of the number
    mod=(num%10);
    printf("The last number is: %d\n",mod);
    return 0;
}