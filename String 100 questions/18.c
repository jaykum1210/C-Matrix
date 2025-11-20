#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter first String = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string = ");
    fgets(b,sizeof(b),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1] = '\0';
        len1--;
    }
    int len2 = strlen(b);
    if (b[len2-1] == '\n')
    {
        b[len2-1] = '\0';
        len2--;
    }
    if (len1!=len2)
    {
        printf("Not Equale\n");
        return 0;
    }
    for (int i = 0; i < len1; i++)
    {
        if (a[i]!=b[i])
        {
            printf("Not equale\n");
            return 0;
        }
    }
    printf("Equale\n");
    return 0;
}