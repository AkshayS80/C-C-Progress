// WAP to store information in the student structure and also display the information

#include <stdio.h>
struct student{
    char firstname[50];
    int roll;
    float marks;
} s[5];

int main(){
    int i;
    printf("Enter the information of the students:\n");
    for (i=0;i<5;++i){
        s[i].roll=i+1;
        printf("Enter first name:");
        scanf("%s",&s[i].firstname);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
    }
    printf("Displaying information:\n");
    for (i=0;i<5;++i){
        printf("\nRoll Number: %d\n",i+1);
        printf("First name:");
        puts(s[i].firstname);
        printf("Marks: %f",s[i].marks);
        printf("\n");
    }
    return 0;
}
