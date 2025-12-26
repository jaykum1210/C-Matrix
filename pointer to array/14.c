#include <stdio.h>

int main(){
    int a,b;
    printf("Number of rows = ");
    scanf("%d",&a);
    printf("Number of columns = ");
    scanf("%d",&b);
    int c[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element at row %d and column %d = ",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int row;
    printf("Enter row = ");
    scanf("%d",&row);
    int (*p)[a][b];
    p = &c;
    printf("Row = ");
    for (int i = 0; i < b; i++)
    {
        printf("%d ",(*p)[row-1][i]);
    }
    return 0;
}