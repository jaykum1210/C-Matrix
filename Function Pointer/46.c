#include <stdio.h>
#include <string.h>

void copy(char a[], char b[], int len){
    for (int i = 0; i < len; i++)
    {
        b[i]=a[i];
    }
} 

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    char b[100];
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    void (*fp)(char *,char *,int);
    fp = copy;
    fp(a,b,len);
    b[len]='\0';
    printf("String = %s\n",b);
    return 0;
}