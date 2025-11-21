#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    char b[100];
    strcpy(b,a);
    for (int i = 0; i < len; i++)
    {
        a[i] = b[(i+1)%len];
    }
    printf("String = %s",a);
    return 0;
}