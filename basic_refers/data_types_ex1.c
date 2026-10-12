#include<stdio.h>
int main()
{
    char option;
    int age;
    float height;
    double weight;

    printf("char:  %zu option:  %zu\n",sizeof(char),sizeof(option)); 
    printf("int :  %zu age:     %zu\n",sizeof(int),sizeof(age));
    printf("float:  %zu height: %zu\n",sizeof(float),sizeof(height));
    printf("double: %zu weight: %zu\n",sizeof(double),sizeof(weight));
    
    return 0;
}