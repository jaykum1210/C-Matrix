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
    int max = 0, count = 0, x = 0;
    char c[x];
    for (int i = 0; i <= b; i++)
    {
        // count = 0;
        if (a[i] != '\0' && a[i] != ' ')
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
                x = 0;
                for (int j = i - count; j < i; j++)
                {
                    c[x++] = a[j];
                }
                c[x]='\0';
            }
            count = 0;
        }
    }
    printf("%s",c);
    return 0;
}