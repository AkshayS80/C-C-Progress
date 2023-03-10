//WAP to print all the prime numbers in a range

#include <stdio.h>
#include <math.h>

int main()
{
    int flag,ll,ul,i,j;
    printf("Enter lower limit\n");
    scanf("%d", &ll);
    printf("Enter upper limit\n");
    scanf("%d", &ul);
    i=ll;
    while(i<=ul)
    {
        j=2;
        flag=0;
        while (j<=i/2)
        {
            if (i%j==0)
            {
                
                flag=1;
                break;
            }
            j++;
        }
        if (flag==0)
        {
            printf("%d ",i);
        }
        i+=2;
    }
    
    return 0;
}
