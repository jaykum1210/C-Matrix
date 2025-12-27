#include <stdio.h>

int main(){
    int r1,c1;
    printf("Enter row = ");
    scanf("%d",&r1);
    printf("Enter column = ");
    scanf("%d",&c1);
    if (r1!=c1)
    {
        printf("Not a square matrix\n");
        return 0;
    }
    int mat[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int (*p)[r1][c1];
    p = &mat;
    printf("Diagonals = ");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (i==j || j == c1-i-1)
            {
                printf("%d ",(*p)[i][j]);
            }
        }
    }
    return 0;
}