#include <stdio.h>

void rec(int a)
{
    while (a != 1)
    {
        int found = 0;
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                printf("%d ", i);
                a /= i;
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("%d ", a);
            break;
        }
    }
}

int main()
{
    int a;
    printf("Enter number = ");
    scanf("%d", &a);
    rec(a);
    return 0;
}