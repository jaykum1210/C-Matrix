#include <stdio.h>

struct number
{
    int a;
    float b;
};

int main(){
    struct number n = {10,10.11};
    printf("Number = %d\n",n.a);
    printf("Float = %0.2f\n",n.b);
    return 0;
}