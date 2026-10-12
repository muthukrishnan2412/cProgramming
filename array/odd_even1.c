#include<stdio.h>
int main()
{
    int size,i,element;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    int even[size];
    for(i=0;i<size;i++)
        {
        printf("Enter the elemnts: ");
        scanf("%d",&arr[i]);
        }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even[i]=arr[i];
        }
    }
}