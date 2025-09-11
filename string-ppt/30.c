#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    printf("Enter character = ");
    scanf("%s",a);
    for (int i = 0; i < 3; i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}