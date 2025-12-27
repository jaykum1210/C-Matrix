#include <stdio.h>

int main(){
    int r1,r2,c1,c2;
    printf("Matrix 1\n");
    printf("Enter row = ");
    scanf("%d",&r1);
    printf("Ener column = ");
    scanf("%d",&c1);
    printf("Matrxi 2\n");
    printf("Enter row = ");
    scanf("%d",&r2);
    printf("Enter column = ");
    scanf("%d",&c2);
    if (r1!=r2 || c1!=c2)
    {
        printf("Addition of matrix not possible\n");
        return 0;
    }
    int mat1[r1][c1],mat2[r2][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at row %d and column %d in matrix 1 = ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at row %d and column %d in matrix 2 = ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    int sum[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Sum array =\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}