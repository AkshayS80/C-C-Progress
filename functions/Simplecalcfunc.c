//WAP to create a simple calc using func.
#include <stdio.h>
int main(){
	int num1,num2,num,res;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("Enter a number to perform an operation:");
	printf("\nAdd-1");
	printf("\nSubtract-2");
	printf("\nMultiply-3");
	printf("\nDivide-4\n");
	scanf("%d",&num);
	switch(num){
		case 1:
			res=add(num1,num2);
			printf("The result is %d",res);
			break;
		case 2:
			res=subtract(num1,num2);
			printf("The result is %d",res);
			break;
		case 3:
			res=multiply(num1,num2);
			printf("The result is %d",res);
			break;
		case 4:
			res=divide(num1,num2);
			printf("The result is %d",res);
			break;
		default:
			printf("Enter a valid number.");
	}
	return 0;
}

int add(a,b){
	int sum;
	sum=a+b;
	return sum;
}

int subtract(a,b){
	int sub;
	sub=a-b;
	return sub;
}

int multiply(a,b){
	int mult;
	mult=a*b;
	return mult;
}

int divide(a,b){
	int div;
	div=a/b;
	return div;
}

