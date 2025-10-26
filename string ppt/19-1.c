#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    if (a[b-1]=='\n')
    {
        a[b-1]='\0';
        b--;
    }
    for (int i = b-1; i >=0; i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}