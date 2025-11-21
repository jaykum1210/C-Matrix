#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    strcpy(b,a);
    for (int i = len-1; i >=0; i--)
    {
        a[i] = b[(i-1+len)%len];
    }
    printf("String = %s",a);
    return 0;
}