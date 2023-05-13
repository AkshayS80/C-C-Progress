// WAP to add two distances in the inch-feet structure

#include <stdio.h>
struct Distance{
    int feet;
    float inch;
} d1,d2,result;

int main(){
    //take first distance input
    printf("Enter the first distance\n");
    printf("Enter feet:");
    scanf("%d",&d1.feet);
    printf("Enter inch:");
    scanf("%f",&d1.inch);
    
    //take second distance input
    printf("Enter the second distance\n");
    printf("Enter feet:");
    scanf("%d",&d2.feet);
    printf("Enter inch:");
    scanf("%f",&d2.inch);
    
    //adding distance
    result.feet=d1.feet + d2.feet;
    result.inch=d1.inch + d2.inch;
    
    //convert inches to feet if greater than 12
    while (result.inch>=12){
        result.inch=result.inch-12.0;
        ++result.feet;
    }
    printf("\n Sum of distance= %d\'-%1f\"",result.feet,result.inch);
}
