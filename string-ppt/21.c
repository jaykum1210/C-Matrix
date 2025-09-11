#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter character = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    for (int i = 0; i < b-1; i++)
    {
        printf("%c",a[i]-32);
    }
    return 0;
}