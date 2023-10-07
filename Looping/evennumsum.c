// WAP to find the sum of all even numbers between 1 and n where n is user given input
#include <stdio.h>
#include <math.h>

int main(){
    int n,i,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    sum=0;
    for (i=1;i<=n;i++){
        if (i%2==0)
            sum=sum+i;
    }
    printf("The sum of even numbers between 1 and %d is %d",n,sum);
}