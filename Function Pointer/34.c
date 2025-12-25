#include <stdio.h>

int bi(int a)
{
    if (a == 0)
        return 0;
    int x = 0, mul = 0, num = 0;
    while (a > 0)
    {
        int p = 1;
        int b = a % 2;
        for (int i = 0; i < x; i++)
        {
            p *= 10;
        }
        mul = b * p + mul;
        a /= 2;
        x++;
    }
    return mul;
}

int main()
{
    int a;
    printf("Enter number = ");
    scanf("%d", &a);
    int (*fp)(int);
    fp = bi;
    int num = fp(a);
    printf("Binary number = %d\n", num);
    return 0;
}