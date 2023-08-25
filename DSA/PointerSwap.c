// WAP to swap 2 numbers using pointer notation

#include <stdio.h>

int main()
{
    int num1,num2,*p,*q,t;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Before Swapping\n");
    printf("%d %d\n",num1,num2);
    p=&num1;
    q=&num2;
    t=*p;
    *p=*q;
    *q=t;
    printf("After Swapping\n");
    printf("%d %d\n",num1,num2);
    return 0;
}