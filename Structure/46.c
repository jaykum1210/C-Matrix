#include <stdio.h>

struct data
{
    int a;
};

static int value = 10;

int main(){
    struct data d;
    printf("Value = %d\n", value);
    return 0;
}
