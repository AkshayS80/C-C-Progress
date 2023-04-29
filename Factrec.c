// WAP to find the factorial using recursion

#include <stdio.h>

int main()
{
    int num,res;
    printf("Enter the number:");
    scanf("%d",&num);
    res=fact(num);
    printf("The factorial of %d is %d",num,res);
    return 0;
}

int fact(int n){
    if (n==0){
        return 1;
    }
    else
        return (n*fact(n-1));
}
