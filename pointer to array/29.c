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
    if (r1!=r2 || c1!=c2)
    {
        printf("Not Equale");
        return 0;
    }
    int b[r1][c1],c[r2][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at row %d and column %d in matrix 1 = ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter element at row %d and column %d in matrix 2 = ",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int (*p1)[r1][c1];
    int (*p2)[r2][c2];
    p1 = &b;
    p2 = &c;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (((*p1)[i][j])!=((*p2)[i][j]))
            {
                printf("Not Equale\n");
                return 0;
            }
        }
    }
    printf("Equale\n");
    return 0;
}