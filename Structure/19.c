#include <stdio.h>

struct number
{
    const int a;
};

int main(){
    struct number a = {100};
    printf("Value = %d\n",a.a);
    return 0;
}