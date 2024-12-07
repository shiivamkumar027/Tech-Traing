#include<stdio.h>
int main(){
    int odd,n,sum,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
       odd=2*i-1;
        printf("%d\n",odd);
    //    sum=sum+odd;
    sum=sum+odd;
    }
        
      
      printf("sum of odd number :%d",sum);
    return 0;
}