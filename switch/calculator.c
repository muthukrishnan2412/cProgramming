
//simple calculator
#include<stdio.h>
int main()
{    while(1)
    {
          
     float num1,num2,sum;
     char operators;

      // choosing the operators for calculating the two numbers 
     printf("Enter the operators (+,-,/,*): ");
     scanf(" %c ",&operators);

     //getting input from thee user
     printf(" Enter the two numbers: ");
     scanf(" %f %f ",&num1,&num2);

     switch(operators)
        {
            case '+':                        //To add two numbers
                sum=num1+num2;
                printf("sum = %f\n",sum);
                break;

            case '-':                        //To subtract two numbers
                sum=num1-num2;
                printf("sum = %f\n",sum);
                break;

            case '/':                       //To divide two numbers
                sum=num1/num2;
                printf("sum = %f\n",sum);
                break;

            case '*':                          //To multiply two numbers
                sum=num1*num2;
                printf("sum = %f\n",sum);
                break;


            default:
            printf("Error! Invalid operator entered.\n");
            break;
          
        }
    }
        return 0;
}