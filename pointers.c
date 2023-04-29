// WAP to find the sum of two numbers using pointers

#include <stdio.h>

int main()
{
    int num1,num2,*p,*q,res;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    p=&num1;
    q=&num2;
    res=*p+*q;
    printf("The result is %d",res);
    return 0;
}
