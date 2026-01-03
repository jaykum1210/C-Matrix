#include <stdio.h>

struct number
{
    int num;
};

void fun(struct number *n){
    n->num = 40;
}

int main(){
    struct number n = {20};
    fun(&n);
    printf("Updated value = %d\n",n.num);
    return 0;
}