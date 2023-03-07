#include <stdio.h>
int main()
{
  float a,b,c;
  printf("Enter first number:");
  scanf("%f",&a);
  printf("Enter second number:");
  scanf("%f",&b);
  printf("Before Swapping, The numbers are:");
  printf("\ %f",a);
  printf("\ %f",b);
  c=a;
  a=b;
  b=c;
  printf("\nAfter Swapping, The numbers are:");
  printf("\ %f",a);
  printf("\ %f",b);
  return 0;
}
