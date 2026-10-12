#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c ", & ch);
    if (ch>='A'&& ch<='z')
    {
        printf("it is an uppercase \n",ch );
    }

    else if(ch>='0' &&  ch<='9')
    {
        printf("it is an numeric \n",ch);
        
    }
    
}