//WAP to print the fibonacci series

#include <stdio.h>
int main()
{
	int a=0,b=1,i=1,n,c;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("%d \n%d",a,b);
	while (i<=n-2)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
		i++;
	}
	return 0;
}
