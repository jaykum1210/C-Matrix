#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    printf("Enter character = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    for (int i = 1; i < b; i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}