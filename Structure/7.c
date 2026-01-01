#include <stdio.h>

struct inner
{
    int i;
};


int main(){
    struct inner a,b;
    a.i = 10;
    b = a;
    printf("Value = %d\n",b.i);
    return 0;
}