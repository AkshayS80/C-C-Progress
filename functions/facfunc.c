//WAP to calculate factorial using function
#include <stdio.h>
int main(){
	int num,res;
	printf("Enter the number you wish to find the factorial of:");
	scanf("%d",&num);
	if (num>0){
		res=fact(num);
		printf("The factorial of %d is %d",num,res);
	}
	else if(num<0){
		printf("Factorials of a negative number don't exist");
	}
	else{
		printf("The factorial of 0 is 1");
	}
	return 0;
}

int fact(n){
	int i,f;
	f=1;
	for (i=n;i>=1;i--){
		f=f*i;
	}
	return f;
}
