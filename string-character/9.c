#include <stdio.h>

int main(){
    char a,b[50],c[100];
    scanf(" %c",&a);
    scanf(" %s",b);
    getchar();
    fgets(c,sizeof(c),stdin);
    printf("%c\n",a);
    printf("%s\n",b);
    printf("%s",c);
    return 0;
}