// Program of transpose of matrix

#include<stdio.h>

// functions declaration
void transpose(int rw, int cl, int a[rw][cl]);
void read( int rw, int cl,int a[rw][cl]);
void write( int rw, int cl,int a[rw][cl]);

// main function

int main(){
    int a[10][10],rw,cl;
    printf("Enter number of rows in matrix=");
    scanf("%d",&rw);
    printf("Enter number of columns in matrix=");
    scanf("%d",&cl);
    // read function calling
    read(rw, cl, a);
    printf("Matrix is=\n");
    // write function calling
    write(rw, cl, a);
    printf("Transpose of matrix is=\n");
    // transpose function callin
    transpose(rw, cl, a);

    return 0;
    }

    // read function definition

    void read(int rw, int cl,int a[rw][cl]){
        printf("Enter %d elements= ", rw*cl);
        for(int i = 0; i < rw; i++){
            for(int j = 0; j < cl; j++){
                scanf("%d",&a[i][j]);
            }
        }
    }

    // write function definition

    void write( int rw, int cl,int a[rw][cl]){
        for(int i = 0; i < rw; i++){
            for(int j = 0; j < cl; j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }

    // transpose function definition

    void transpose(int rw, int cl, int a[rw][cl]){
        int b[rw][cl];
        for(int i = 0; i < rw; i++){
            for(int j = 0; j < cl; j++){
                b[j][i]=a[i][j];
            }
        }
        
        // write function calling to print tha transposed matrix

        write(rw, cl, b);
    }

