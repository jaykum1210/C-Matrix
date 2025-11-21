#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    char b[100];
    printf("Enter substring = ");
    fgets(b,sizeof(b),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1] = '\0';
        len1--;
    }
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1] = '\0';
        len2--;
    }
    if (len1<len2)
    {
        printf("Not present\n");
        return 0;
    }
    for (int i = 0; i < len2; i++)
    {
        if (a[i]!=b[i])
        {
            printf("Not Present\n");
            return 0;
        }
    }
    printf("Present\n");
    return 0;
}