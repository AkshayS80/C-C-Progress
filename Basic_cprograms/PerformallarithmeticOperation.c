//WAP to print WAP to perform all arithmetic operations

#include <stdio.h>
int main()
{
  float a,b,c,d,e,f;
  printf("Enter first number:");
  scanf("%f",&a);
  printf("Enter second number:");
  scanf("%f",&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  printf("addition= %f",c);
  printf("/nsubtraction= %f",d);
  printf("/nmultiplication= %f",e);
  printf("/ndivision= %f",f);
  return 0;
}
