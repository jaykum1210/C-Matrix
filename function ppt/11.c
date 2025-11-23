#include <stdio.h>
#include <string.h>

void word(char a[100],char b[100]){
    int len1 = strlen(a);
    int len2 = strlen(b);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
        len2--;
    }
    for (int i = len1; i < len1+len2; i++)
    {
        a[i] = b[i-len1];
    }
    a[len1+len2]='\0';
    printf("String = %s",a);
}

int main(){
    char a[100],b[100];
    printf("Enter string 1st = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter string 2nd = ");
    fgets(b,sizeof(b),stdin);
    word(a,b);
    return 0;
}