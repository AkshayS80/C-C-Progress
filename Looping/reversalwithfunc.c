#include <stdio.h>
int main()
{
	int num,result;
	printf("Enter the number:");
	scanf("%d",&num);
	result=reversed(num);
	printf("The number when reversed becomes: %d",result);
	return 0;
}

int reversed(int n){
    int b,r;
    b=0;
    r=0;
    while (n!=0)
	{
		b=n%10;
		r=(r*10)+b;
		n=n/10;
	}
	return r;
}
