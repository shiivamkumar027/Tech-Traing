#include<stdio.h>
int main(){
    int a;
    float b;
    printf("Enter your marks=");
    scanf("%d",&a);
    b=a*100/600;
    if(b>=60 && a>=75){
    printf("You are passed");
    }
    else if(a>=75 && a<=100){
        printf("Exellent marks");
    }
    else if(a==0)
    {
    printf("Invalid marks");
    }
    return 0;
}