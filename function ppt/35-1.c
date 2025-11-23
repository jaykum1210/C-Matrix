#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    strlwr(a);
    printf("String = %s",a);
    return 0;
}