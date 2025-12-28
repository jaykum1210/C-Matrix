#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter string = ");
    fgets(b,sizeof(b),stdin);
    int len1 = strlen(a);
    int len2 = strlen(b);
    if (len1!=len2)
    {
        printf("Not Equale\n");
        return 0;
    }
    char *arr1[len1];
    char *arr2[len2];
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = &a[i];
        arr2[i] = &b[i];
    }
    for (int i = 0; i < len1; i++)
    {
        if (*arr1[i]!=*arr2[i])
        {
            printf("Not Equale\n");
            return 0;
        }
    }
    printf("Equale\n");
    return 0;
}