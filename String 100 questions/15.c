#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100] = {0};
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int c = strlen(a);
    if (a[c-1]=='\n')
    {
        a[c-1]='\0';
        c--;
    }
    for (int i = c-1; i >=0; i--)
    {
        b[c-1-i] = a[i];
    }
    b[c] = '\0';
    printf("String = %s",b);
    return 0;
}