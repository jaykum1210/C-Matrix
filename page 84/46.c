#include <stdio.h>
#include <string.h>

void rec(char a[], int len){
    for (int i = 0; i < len; i++)
    {
        if ((i==0 || a[i-1]==' ') && (a[i]>='a' && a[i]<='z'))
        {
            a[i] = a[i]-32;
        }
    }
    
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