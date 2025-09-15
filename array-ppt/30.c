#include <stdio.h>

int main()
{
    int a, max = 0, min = 0;
    printf("Enter number = ");
    scanf("%d", &a);
    int b[a];
    printf("Enter %d elements = ", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i] > b[max])
        {
            max = i;
        }
        if (b[i] < b[min])
        {
            min = i;
        }
    }
    int temp = b[max];
    b[max] = b[min];
    b[min] = temp;
    for (int i = 0; i < a; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}