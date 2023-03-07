/*
WAP to input elec unit charges and calculate total elec bill based on the condition

First 50 --> ₹1 per unit
Next 100 --> ₹2 per unit
Next 100 --> ₹3 per unit
Above 250 --> ₹4 per unit
*/ 

#include <stdio.h>
int main()
{
  int unit,total;
  printf("Enter the unit/n");
  scanf("%d",&unit);
  if (unit<=50)
  {
    total=unit*1;
    printf("Your total is ₹%d",total);
  }
  else if (unit>=50 && unit<=150)
  {
    total=(unit-50)*2+50;
    printf("Your total is ₹%d",total);
  }
  else if (unit>=150 && unit<=250)
  {
    total=(unit-150)*3+(100*2)+50;
    printf("Your total is ₹%d",total);
  } 
  else
  {
    total=(unit-250)*4+(100*3)+(100*2)+50;
    printf("Your total is ₹%d",total);
  } 
  return 0;
}