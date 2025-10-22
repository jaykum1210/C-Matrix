#include <stdio.h>
#include <limits.h>

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
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (c[i][j]>max)
            {
                max = c[i][j];
            }
            if (c[i][j]<min)
            {
                min = c[i][j];
            }
        }
    }
    printf("Maximum Number = %d\n",max);
    printf("Minimum number = %d\n",min);
    return 0;
}