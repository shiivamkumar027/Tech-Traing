#include<stdio.h>
int main()
{
    int marks;
    printf("ENter your marks \n");
    scanf("%d",&marks);
    if(marks>=300)
    {
        printf("You clear cutoff ");
    }
    else
    {
        printf("You did not clear cutoff");
    }
return 0;
}