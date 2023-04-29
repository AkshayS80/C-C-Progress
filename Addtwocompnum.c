// WAP to add two complex numbers using struct and use a function to pass the structure variable

#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
}complex;

complex add(complex n1,complex n2);

int main(){
    complex n1,n2,result;
    printf("Enter the first complex number\n");
    printf("Enter real part:");
    scanf("%f",&n1.real);
    printf("Enter imaginary part:");
    scanf("%f",&n1.imag);
    
 
    printf("Enter the second complex number\n");
    printf("Enter real part:");
    scanf("%f",&n2.real);
    printf("Enter imaginary part:");
    scanf("%f",&n2.imag);
    
    result=add(n1,n2);
    printf("Sum= %1f + %1fi",result.real,result.imag);
    return 0;
}

complex add(complex n1, complex n2){
    complex temp;
    temp.real=n1.real + n2.real;
    temp.imag=n1.imag + n2.imag;
    return temp;
}
