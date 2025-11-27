#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    strcpy(b,a);
    printf("String = %s",b);
    return 0;
}