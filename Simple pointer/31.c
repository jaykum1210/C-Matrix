#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    char *p = a;
    printf("First character = %c\n",*p);
    return 0;
}