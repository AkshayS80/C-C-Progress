// WAP to find the sum of n natural numbers using recursion

#include <stdio.h>

int main()
{
    int num,*p,*q,res;
    printf("Enter the number:");
    scanf("%d",&num);
    res=sum(num);
    printf("The sum of all natural numbers before %d is %d",num,res);
    return 0;
}

int sum(int n){
    if (n!=0){
        return (n+sum(n-1));
    }
    else
        return 0;
}
