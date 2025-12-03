#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    for (int i = 0; a[i]!='\0'; i++)
    {
        char *ptr = &a[i];
        printf("%c ",*ptr);
    }
    return 0;
}