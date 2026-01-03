#include <stdio.h>

struct character
{
    char c;
};

int main(){
    struct character c;
    printf("Enter character = ");
    scanf("%c",&c.c);
    printf("Character = %c\n",c.c);
    return 0;
}