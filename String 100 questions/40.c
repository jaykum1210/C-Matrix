#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1] = '\0';
        len--;
    }
    int temp = a[len-1];
    a[len-1] = a[0];
    a[0] = temp;
    printf("String = %s",a);
    return 0;
}