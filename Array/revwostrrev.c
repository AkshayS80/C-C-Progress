// WAP to reverse a string without strrev()

#include <stdio.h>

int main(){
    char string[100]="tutorial",reversed_string[100];
    int i,j,count=0;
    printf("\n Given string= %s",string);
    while(string[count]!='\0'){
        count++;
    }
    j=count-1;
    for (i=0;i<count;i++){
        reversed_string[i]=string[j];
        j--;
    }
    printf("\n Reversed string= %s",reversed_string);
    return 0;
}
