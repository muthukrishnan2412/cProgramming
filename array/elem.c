#include<stdio.h>
int main()
{
    int size,i,element,flag;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
        {
        scanf("%d",&arr[i]);
        }
    for (i=0;i<size;i++)
        {
         if(element==arr[i])
         {
            printf("element found");
            flag==1;
            break;
         }
        }
        if(flag==0)
        {
            printf("element not found");
        }
return 0;
}