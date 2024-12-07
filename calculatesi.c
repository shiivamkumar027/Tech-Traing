#include<stdio.h>
int main(){
    int p,r,t;
    float si;
    printf("Enter value of p");
    scanf("%d",&p);
printf("Enter value of r");
    scanf("%d",&r);
printf("Enter value of t");
    scanf("%d",&t);
si=(p*r*t)/100;
printf("The si value is=%.2f\n",si);
return 0;
}