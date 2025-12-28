#include <stdio.h>

int main(){
    int r,c;
    printf("Enter row = ");
    scanf("%d",&r);
    printf("Enter column = ");
    scanf("%d",&c);
    if (r!=c)
    {
        printf("Not a square matrix\n");
        return 0;
    }
    int b[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element at row %d and column %d = ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    int sum = 0;
    int (*p)[r][c];
    p = &b;
    for (int i = 0; i < r; i++)
    {
        sum+=(*p)[i][i];
    }
    printf("Trace = %d\n",sum);
    return 0;
}