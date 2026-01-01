#include <stdio.h>

struct number
{
    int a;
};

int main(){
    struct number n;
    printf("Size = %zu\n",sizeof(n));
    return 0;
}