#include<stdio.h>
#include<string.h>
int main()
{
    int i,num,rev=0; //rev stores the reversed number
    printf("Enter a number: "); //getting input from the user
    scanf("%d",&num);
        if(num<0)
                {
                    printf("please enter a positive integer"); //checking whether the number is +ve or  -ve
                 }
            else
                {
                    for (i=0;num!=0;i++) //if positive the for loop will execute
                    {
                    int digit=num%10;
                    rev=rev*10+digit;
                    num=num/10;
                    }
                 printf("reversed number is: %d\n",rev);
                }

    //printf("reversed number is: %d",rev);
}
