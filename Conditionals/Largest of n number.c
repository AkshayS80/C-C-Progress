// WAP to find the largest of n numbers.

#include <stdio.h>
int main()
{
	int n,a,b,i=2;
	printf("Enter the total numbers:");
	scanf("%d",&n);
	printf("Enter a number:");
	scanf("%d",&a);
	while (i<=n)
	{
		printf("Enter a number:");
		scanf("%d",&b);
		if (b>a)
		{
			a=b;
		}
		i++;
	}
	printf("The largest number is: %d",a);
	return 0;
}
