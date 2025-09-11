#include <stdio.h>

int main()
{
    int a;
    printf("Enter number = ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i <= a / 2)
        {
            for (int j = 1; j <= a; j++)
            {
                if (j < i + 1 || j > a - i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        else
        {
            for (int j = 1; j<=a; j++)
            {
                if (j<a-i+2 || j>i-1)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}