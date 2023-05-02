// Program of multiplication of 2*2 matrix
#include<stdio.h>
// Declaration of multiply function
void mul(int A[2][2], int B[2][2]);
int main(){
    int A[2][2], B[2][2], C[2][2], i, j;
    printf("Enter elements of first matrix(2*2)= ");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of second matrix(2*2)= ");
    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    // function calling
    mul(A,B);
    return 0;
}
// function definition
void mul(int A[2][2], int B[2][2]){
    int C[2][2], i, j, k, sum;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (sum=0, k = 0; k < 2; k++)
            {
                sum = sum + A[i][k] * B[k][j];
                C[i][j] = sum;
            }
        }
    }
    printf("Result matrix is=\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",C[i][j]); 
        }
         printf("\n");
    }
}