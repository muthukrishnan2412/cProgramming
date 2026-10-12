//sum of number 1 to n whose last digit is 5
#include<stdio.h>
int main()
{
    int i,limit,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1; i<=limit;i++)
    {
        if(i%10==5)
        {
            sum=sum+i;
            
        }
    
    }
    printf("%d\n",sum);
    return 0;
}
