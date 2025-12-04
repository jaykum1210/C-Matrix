#include <stdio.h>

int main(){
    char a,b;
    printf("Enter character = ");
    scanf(" %c",&a);
    printf("Enter second character = ");
    scanf(" %c",&b);
    char *p = &a;
    printf("Pointer = %c\n",*p);
    p = &b;
    printf("Updated Pointer = %c\n",*p);
    return 0;
}