//WAP to find the reverse of a number 
#include <stdio.h>
int main(){
    int n,rev,digit;
    printf("Enter a number:");
    scanf("%d",&n);
    rev=0;

    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    printf("The reversed number is %d",rev);
    return 0;
}
