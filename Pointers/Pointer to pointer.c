//WAP to show the use of pointer to pointer variable
#include <stdio.h>
int main(){
	int var, *ptr1, **ptr2;
	var=10;
	ptr1=&var;
	printf("The address of var is %u\n",ptr1);
	printf("The value of var is %d\n\n",*ptr1);
	
	ptr2=&ptr1;
	printf("The address of ptr is %u\n",ptr2);
	printf("The value of ptr is %u\n",*ptr2);
	printf("The value of var from ptr2 is %d\n",**ptr2);
	
	return 0;
}
