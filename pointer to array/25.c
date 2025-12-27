#include <stdio.h>

int main(){
    int r1,r2,c1,c2;
    printf("Matrix 1\n");
    printf("Enter row = ");
    scanf("%d",&r1);
    printf("Enter column = ");
    scanf("%d",&c1);
    printf("Matrix 2\n");
    printf("Enter row = ");
    scanf("%d",&r2);
    printf("Enter column = ");
    scanf("%d",&c2);
    if (r1!=c1)
    {
        printf("Not able to SUbtract\n");
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
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter element at row %d and column %d in matrix 2 = ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    int (*p1)[r1][c1];
    p1 = &mat1;
    int (*p2)[r2][c2];
    p2 = &mat2;
    printf("Multiplication =\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < c1; k++)
            {
                sum+=(*p1)[i][k]*(*p2)[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}