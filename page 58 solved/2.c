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
    for (int i = 0; i < a; i++)
    {
        int sum1=0;
        for (int j = 0; j < b; j++)
        {
            sum1 += c[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum1);
    }
    for (int i = 0; i < b; i++)
    {
        int sum2=0;
        for (int j = 0; j <b; j++)
        {
            sum2+=c[j][i];
        }
        printf("Sum of column %d = %d\n",i+1,sum2);
    }
    
    return 0;
}