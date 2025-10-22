#include <stdio.h>

int main(){
    int a;
    printf("Enter number of rows and columns = ");
    scanf("%d",&a);
    int c[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter element at row %d and column %d = ",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int d[a*a],t=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            d[t] = c[i][j];
            t++;
        }
    }
    int e[a*a],x=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            e[x] = c[j][i];
            x++;
        }
    }
    printf("Array = \n");
    for (int i = 0; i < a*a; i++)
    {
        printf("%d ",d[i]);
    }
    printf("Array =\n");
    for (int i = 0; i < a*a; i++)
    {
        printf("%d ",e[i]);
    }
    return 0;
}