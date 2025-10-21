#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of rows = ");
    scanf("%d",&a);
    printf("Enter number of columns = ");
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
    int sum,i,j;
    for (i = 0; i < b; i++)
    {
        int sum = 0;
        for (j = 0; j < a; j++)
        {
            sum+=c[j][i];
        }
        printf("Sum of column %d = %d\n",i+1,sum);
    }
    return 0;
}