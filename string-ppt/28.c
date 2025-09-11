#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    printf("Enter character = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    for (int i = b-2; i >=0; i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}