#include <stdio.h>

int main(){
    int a;
    printf("Enter number of rows and columns = ");
    scanf("%d",&a);
    int b[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter element at row %d and column %d = ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i!=j && i+j!=a-1)
            {
                printf("%d ",b[i][j]);
            }
        }
    }
    return 0;
}