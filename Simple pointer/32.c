#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    char *p = a;
    while ((*p)!='\n')
    {
        printf("%c ",*p);
        p++;
    }
    return 0;
}