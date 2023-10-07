// WAP to print the fibonacci series using recursion

#include<stdio.h>    


int main(){    
    int n,i;
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series\n");
    for (i=0;i<n;i++){
        printf("%d ", Fibo(i));
    }           
return 0;
}

int Fibo(int n){
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( Fibo(n-1) + Fibo(n-2) );
}