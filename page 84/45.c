#include <stdio.h>
#include <string.h>

void rec(char a[], int len){
    int x = 0;
    for (int i = 0; i < len; i++)
    {
        if (!(a[i]==' ' && a[i+1]==' '))
        {
            a[x++] = a[i];
        }
    }
    a[x]='\0';
}

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
    rec(a,len);
    printf("String = %s",a);
    return 0;
}