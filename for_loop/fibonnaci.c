#include<stdio.h>
int main()
{
    int limit,fib;
    int first=0;
    int second=1;
    printf("enter the limit: ");
    scanf("%d", &limit);
    while(first<=limit)
    {   
        printf("%d ",first);
        
        fib=first+second;
        first=second;
        second=fib;
        
    }
    return 0;
}