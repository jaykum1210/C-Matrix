#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    a[0]=a[0]-32;
    printf("String = %s",a);
    return 0;
}