#include <stdio.h>

enum color {
    RED,
    GREEN,
    BLUE,
    BLACK
};

struct data
{
    enum color c;
};

int main(){
    struct data d;
    d.c = RED;
    if (d.c==RED)
    {
        printf("RED\n");
    }
    return 0;
}