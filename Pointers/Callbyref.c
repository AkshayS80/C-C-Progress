// WAP to swap 2 numbers using call by reference

#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Before Swapping\n");
    printf("%d %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After Swapping\n");
    printf("%d %d\n",num1,num2);
    return 0;
}

void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
