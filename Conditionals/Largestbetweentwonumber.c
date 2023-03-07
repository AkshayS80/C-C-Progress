// WAP to check the largest between two numbers.

#include <stdio.h>
int main()
{
  float a,b;
  printf("Enter first number:");
  scanf("%f",&a);
  printf("Enter second number:");
  scanf("%f",&b);
  if (a>b)   
    printf("%d is larger than %d",a,b);
  else
    printf("%d is larger than %d",b,a);
  return 0;
}