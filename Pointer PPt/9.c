#include <stdio.h>

int main(){
    char a;
    printf("Enter Character = ");
    scanf("%c",&a);
    char *ptr = &a;
    printf("Character = %c\n",*ptr);
    return 0;
}