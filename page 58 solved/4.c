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
    int x[a],y[a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i==j)
            {
                x[i] = c[i][j];
                break;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i+j==a-1)
            {
                y[i] = c[i][j];
                break;
            }
        }
    }
    int sum=0;
    for (int i = 0; i < a; i++)
    {
        sum+=y[i]+x[i];
    }
    if (a/2%2!=0)
    {
        sum-=c[a/2][a/2];
    }
    printf("Diagonal 1 = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",x[i]);
    }
    printf("Diagonal 2 = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",y[i]);
    }
    printf("Sum = %d\n",sum);
    return 0;
}