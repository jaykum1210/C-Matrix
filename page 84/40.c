#include <stdio.h>
#include <string.h>

void rec(char a[], char b[], int len){
    for (int i = 0; i < len; i++)
    {
        b[len-i-1] = a[i];
    }
    b[len]='\0';
}

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
    rec(a,b,len);
    printf("String = %s",b);
    return 0;
}