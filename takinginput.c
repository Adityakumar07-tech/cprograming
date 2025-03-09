#include<stdio.h>
int main() 
{ 
    float radius;
    printf("Enter Radius :");
    scanf("%f",&radius);
    float pi=3.14;
    float area = pi*radius*radius;
    printf("the area of circle:%f",area);
    return 0;
}
