#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    char *arr[len];
    for (int i = 0; i < len; i++)
    {
        arr[i] = &a[i];
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c",*arr[i]);
    }
    return 0;
}