// WAP to print all armstrong numbers between 100 and 999
#include <stdio.h>
#include <math.h>
int main()
{
	int ll,ul,i,num,b,sum,c;
	ll=100;
	ul=999;
	printf("The armstrong numbers between 100 and 999 are:\n\n");
	for (i=100;i<=ul;i++)
	{
		sum=0;
		num=i;
		while (num!=0)
		{
		b=num%10;
		sum=sum+pow(b,3);
		num=num/10;
		}
		if (sum==i)
			printf("%d ",i);
	}
	return 0;
}
