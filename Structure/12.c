#include <stdio.h>

struct diff
{
    int a;
    float b;
    char c;
    char e[100];
};

int main(){
    struct diff d = {10,10.25,'A',"Jay Kumawat"};
    printf("Integer = %d\n",d.a);
    printf("Float = %0.2f\n",d.b);
    printf("Character = %c\n",d.c);
    printf("String = %s",d.e);
    return 0;
}