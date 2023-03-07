//WAP to convert Farenheit temp --> Celsius temp

#include <stdio.h>
int main()
{
  float f,c;
  printf("Enter the Farenheit value:");
  scanf("%f",&f);
  c=(32-f)*5/9;
  printf("Hence, the celsius value of %f",f);
  printf("\ is %f",c);
  return 0;
}
