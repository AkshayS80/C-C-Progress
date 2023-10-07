// WAP to find out whether a number is an armstrong number or not
#include <stdio.h>
#include <math.h>

int main(){
    int num,r,sum,i;
    printf("Enter the number:");
    scanf("%d",&num);
    sum=0;
    i=num;
    while(num!=0){
        r=num%10;
        sum=sum+pow(r,3);
        num=num/10;
    }
    if (sum==i)
        printf("%d is an armstrong number",i);
    else
        printf("%d is not an armstrong number",i);
}