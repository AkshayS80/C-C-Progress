//WAP to check a number is prime or not.

#include <stdio.h>
#include <math.h>

int main()
{
    int flag=0,n,i;
    printf("Enter the number\n");
    scanf("%d", &n);
    i=2;
    while (i<=sqrt(n))
    {
        if (n%i==0)
        {
            printf("%d is not prime",n);
            flag=1;
            break;
        }
        i++;
    }
    if (flag==0)
    {
        printf("%d is prime",n);
    }
    return 0;
}
