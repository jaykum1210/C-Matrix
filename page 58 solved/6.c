#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number of rows = ");
    scanf("%d", &a);
    printf("Enter number of columns = ");
    scanf("%d", &b);
    int c[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element at row %d and column %d = ", i + 1, j + 1);
            scanf("%d", &c[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = j + 1; k < b; k++)
            {
                if (c[i][j] > c[i][k])
                {
                    int temp = c[i][j];
                    c[i][j] = c[i][k];
                    c[i][k] = temp;
                }
            }
        }
    }

    printf("Array =\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}