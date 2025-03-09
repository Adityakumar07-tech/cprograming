#include<stdio.h>
int main()
    {
        float principal, rate, time, si ;
         printf("enter principal :");
         scanf("%f",&principal);
        printf("enter rate :");
        scanf("%f", &rate);
        printf("enter time :");
        scanf("%f", &time);
        si= (principal*rate*time)/100;
        printf("simple interest:%f",si);
        return 0;
    }
