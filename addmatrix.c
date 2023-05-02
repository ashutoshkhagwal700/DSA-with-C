// Program of Addition of 2D matrix
#include<stdio.h>

// function declaration
void addMat(int A[2][2], int B[2][2]);
int main(){
    int A[2][2],B[2][2],C[2][2],i,j;
    printf("Enter elements of first matrix= ");
    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of second matrix= ");
    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // function calling
    addMat(A, B);
     return 0;
}

// function definition
    void addMat(int A[2][2], int B[2][2]){
        int C[2][2];
        printf("\nAddition of matrix=\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j]= A[i][j] + B[i][j];
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    }
   
