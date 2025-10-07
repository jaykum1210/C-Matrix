#include <stdio.h>

int main(){
    int row,column;
    printf("Enter number of rows = ");
    scanf("%d",&row);
    printf("Enter number of columns = ");
    scanf("%d",&column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j<column; j++)
        {
            printf("Enter element at row %d at column %d = ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j<column; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}