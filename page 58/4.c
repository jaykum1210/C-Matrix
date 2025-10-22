#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of rows = ");
    scanf("%d",&a);
    printf("Enter number of columns = ");
    scanf("%d",&b);
    int c[a+1][b+1];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for (int i = 0; i < a+1; i++)
    {
        if (i<a)
        {
            for (int j = b; j < b+1; j++)
            {
                printf("Enter element at row %d and column %d = ",i+1,j+1);
                scanf("%d",&c[i][j]);
            }
        }
        else{
            for (int j = 0; j < b+1; j++)
            {
                printf("Enter element at row %d and column %d = ",i+1,j+1);
                scanf("%d",&c[i][j]);
            }
        }
    }
    for (int i = 0; i < a+1; i++)
    {
        for (int j = 0; j < b+1; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}