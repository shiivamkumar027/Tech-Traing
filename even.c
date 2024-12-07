#include<stdio.h>
int main(){
    int even,n,sum,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
       even=2*i;
    printf("%d\n",even);
    sum+=even;
    }
    printf("sum of even number :%d",sum);
        return 0;
}