/*
WAP to enter marks of phy,chem,math,bio and comp and calculate percentage and assign a grade based on
>=90% -->> A+
>=80% -->> A
>=60% -->> B
>=40% -->> C
<=40% -->> F
*/ 

#include <stdio.h>
int main()
{
  int phy,chem,maths,bio,comp,total,mp;
  printf("Enter the marks/n");
  printf("Phy:");
  scanf("%d",&phy);
  printf("Chem:");
  scanf("%d",&chem);
  printf("Maths");
  scanf("%d",&maths);
  printf("Bio:");
  scanf("%d",&bio);
  printf("Comp:");
  scanf("%d",&comp);
  total=phy+chem+maths+bio+comp;
  mp=total/5;
  printf("The marks percentage is %d",mp);
  if (mp>=90)
    printf("Your grade is A+");
  else if (mp>=80)
    printf("Your grade is A");
  else if (mp>=60)
    printf("Your grade is B");
  else if (mp>=40)
    printf("Your grade is C");
  else
    printf("Your grade is F");   
  return 0;
}