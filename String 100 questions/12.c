#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    printf("Enter string 1 = ");
    fgets(a, sizeof(a), stdin);
    printf("Enter string 2 = ");
    fgets(b, sizeof(b), stdin);
    int num1, num2;
    int count1 = strlen(a);
    if (a[count1 - 1] == '\n')
    {
        a[count1 - 1] = '\0';
        count1--;
    }
    int count2 = strlen(b);
    if (b[count2 - 1] == '\n')
    {
        b[count2 - 1] = '\0';
        count2--;
    }
    if (count1 != count2)
    {
        printf("Not an Anagram\n");
        return 0;
    }
    for (int i = 0; i < count1; i++)
    {
        num1 = 0, num2 = 0;
        int found = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] == a[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            for (int j = 0; j < count1; j++)
            {
                if (a[i] == a[j])
                {
                    num1++;
                }
            }
            for (int j = 0; j < count2; j++)
            {
                if (a[i] == b[j])
                {
                    num2++;
                }
            }
            if (num1 != num2)
            {
                printf("Not an Anagram\n");
                return 0;
            }
        }
    }
    printf("Anagram\n");
    return 0;
}