// WAP to multiply 2D array
#include <stdio.h>
int main() {
    int r1, c1,r2,c2, a[10][10], b[10][10], prod[10][10], i, j;
    printf("Enter the number of rows for matrix a: ");
    scanf("%d", &r1);
    printf("Enter the number of columns for matrix a: ");
    scanf("%d", &c1);
    printf("Enter the number of rows for matrix b: ");
    scanf("%d", &r2);
    printf("Enter the number of columns for matrix b: ");
    scanf("%d", &c2);
    if (r2==c1){
        printf("\nEnter elements of 1st matrix:\n");
        for (i = 0; i < r1; i++){
            for (j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }
    
        printf("Enter elements of 2nd matrix:\n");
        for (i = 0; i < r2; i++){
            for (j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }
    
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                prod[i][j] = 0;
            }
        }

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    prod[i][j] += prod[i][k] * prod[k][j];
                }
            }
        }
   
        printf("\nProduct of two matrices: \n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c2; j++) {
                printf("%d   ", prod[i][j]);
            }
            printf("\n\n");
        }
    else{
        printf("Multiplication is not possible!");
    }
    return 0;
}

