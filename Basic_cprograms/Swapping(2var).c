//WAP to print to swap two numbers without using a third variable

#include <stdio.h>
int main()
{
  float a,b;
  printf("Enter first number:");
  scanf("%f",&a);
  printf("Enter second number:");
  scanf("%f",&b);
  printf("Before Swapping, The numbers are:");
  printf("\ %f",a);
  printf("\ %f",b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nAfter Swapping, The numbers are:");
  printf("\ %f",a);
  printf("\ %f",b);
  return 0;
}
