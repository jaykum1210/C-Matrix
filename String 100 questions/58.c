#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    printf("Enter substring = ");
    fgets(b,sizeof(b),stdin);
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
        len2--;
    }
    if (len2>len1)
    {
        printf("Not Present\n");
        return 0;
    }
    for (int i = 0; i < len2; i++)
    {
        if (a[len1-i-1]!=b[len2-i-1])
        {
            printf("Not Present\n");
            return 0;
        }
    }
    printf("Present\n");
    return 0;
}