#include<stdio.h>
int main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    if(a>0)
    {
printf("Number is positive");
    }
    else if(a<0)
    {
        printf("Number is negative");
    }
   else if(a==0) {
        printf("Invalid input\n Try again");
    }
    return 0;
}