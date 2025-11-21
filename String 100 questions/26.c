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
    for (int i = 0; i < len/2; i++)
    {
        char temp = a[i];
        a[i] = a[len-i-1];
        a[len-i-1] = temp;
    }
    printf("String = %s",a);
    return 0;
}