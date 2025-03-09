#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first no :");
    scanf("%d",&a);
    printf("enter secon no:");
    scanf("%d",&b);
    int q=a/b;
   int r=(a-q*b);
    printf("the remainder when %d is dividwd by %d : %d",a,b,r);
    
    return 0;
}