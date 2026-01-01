#include <stdio.h>

struct name
{
    char c[100];
};

int main(){
    struct name n;
    printf("Enter name = ");
    fgets(n.c,sizeof(n.c),stdin);
    printf("Name = %s",n.c);
    return 0;
}