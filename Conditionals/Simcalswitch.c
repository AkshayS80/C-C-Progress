//WAP to create a simple claculator that performs all operations with switch case
#include <stdio.h>
int main()
{
	int num,a,b,res;
	printf("Enter which operation you would like to perform:");
	printf("\n1-Add");
	printf("\n2-Subtract");
	printf("\n3-Multiply");
	printf("\n4-Divide\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("Enter the first number\n");
			scanf("%d",&a);
			printf("Enter the second number\n");
			scanf("%d",&b);
			res=a+b;
			printf("The result is %d",res);
			break;
		case 2:
			printf("Enter the first number\n");
			scanf("%d",&a);
			printf("Enter the second number\n");
			scanf("%d",&b);
			res=a-b;
			printf("The result is %d",res);
			break;
		case 3:
			printf("Enter the first number\n");
			scanf("%d",&a);
			printf("Enter the second number\n");
			scanf("%d",&b);
			res=a*b;
			printf("The result is %d",res);
			break;
		case 4:
			printf("Enter the first number\n");
			scanf("%d",&a);
			printf("Enter the second number\n");
			scanf("%d",&b);
			res=a/b;
			printf("The result is %d",res);
			break;
		default:
			printf("%d is not a valid number.",num);
	}	
	return 0;
}
