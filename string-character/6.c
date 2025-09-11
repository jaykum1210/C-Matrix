#include <stdio.h>

int main(){
    char a,b,c[50];
    scanf(" %c",&a);
    getchar();
    b = getchar();
    // scanf(" %c",&b);
    scanf("%s",c);
    printf("%c",a);
    printf("%c",b);
    printf("%s",c);
    return 0;
}