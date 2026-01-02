#include <stdio.h>

struct number
{
    int a;
    float b;
};

int main(){
    struct number n = {1,0.0};
    printf("Value = %d %0.5f\n",n.a,n.b);
    return 0;
}