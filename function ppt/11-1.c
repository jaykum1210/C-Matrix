#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter 1st string = ");
    fgets(a,sizeof(a),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
    }
    printf("Enter 2nd string = ");
    fgets(b,sizeof(b),stdin);
    strcat(a,b);
    printf("String = %s",a);
    return 0;
}