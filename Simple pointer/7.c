#include <stdio.h>

int main(){
    char a;
    printf("Enter Character = ");
    scanf("%c",&a);
    char *p = &a;
    printf("Character = %c\n",*p);
    return 0;
}