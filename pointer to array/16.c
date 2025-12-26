#include <stdio.h>

int main(){
    int a,b;
    printf("Enter row = ");
    scanf("%d",&a);
    printf("Enter column = ");
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
    int (*p)[a][b];
    p = &c;
    for (int i = 0; i < a; i++)
    {
        int sum = 0;
        for (int j = 0; j < b; j++)
        {
            sum+=(*p)[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }
    return 0;
}