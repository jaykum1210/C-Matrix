#include <stdio.h>

struct number
{
    int a;
    char b[100];
};

int main(){
    struct number n;
    printf("Size = %zu\n",sizeof(n));
}