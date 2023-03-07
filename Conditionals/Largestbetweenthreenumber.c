// WAP to check the largest between three numbers.

#include <stdio.h>
int main()
{
  float a,b,c;
  printf("Enter first number:");
  scanf("%f",&a);
  printf("Enter second number:");
  scanf("%f",&b);
  printf("Enter third number:");
  scanf("%f",&c);
  if (a>b)
  {
    if (a>c)
        printf("%d is the largest",a);
    else
        printf("%d is the largest",c);
  }  
  else
  {
    if (b>c)
        printf("%d is the largest",b);
    else
        printf("%d is the largest",c);
  } 
  return 0;
}