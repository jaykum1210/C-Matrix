#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("Enter string = ");
    fgets(a, sizeof(a), stdin);
    int b = strlen(a);
    if (a[b - 1] == '\n')
    {
        a[b - 1] = '\0';
        b--;
    }
    int count = 0, min = __INT_MAX__, x = 0;
    char c[x];
    for (int i = 0; i <= b; i++)
    {
        if (a[i] != '\0' && a[i] != ' ')
        {
            count++;
        }
        else
        {
            if (count < min)
            {
                min = count;
                x = 0;
                for (int j = i-count; j < i; j++)
                {
                    c[x++] = a[j];
                }
                c[x] = '\0';
            }
            count = 0;
        }
    }
    printf("String = %s",c);
    return 0;
}