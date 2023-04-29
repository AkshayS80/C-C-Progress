// WAP to find the frequency of a character in a string
#include <stdio.h>
void main(){
   char str[100],choice;
   int i,ctr=0;
	   
	printf("Enter the string : ");
    fgets(str,sizeof str,stdin);
	
   printf("Enter the character to find frequency: ");
   scanf("%c",&choice);
   for(i=0;str[i]!='\0';++i)
   {
       if(choice==str[i])
           ++ctr;
   }
   printf("The frequency of '%c' is : %d\n", choice, ctr);
}
