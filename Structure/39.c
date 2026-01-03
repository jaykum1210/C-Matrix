#include <stdio.h>

struct number
{
    int num;
};

void fun(struct number *n){
    n->num = 20;
}

int main(){
    struct number num = {10};
    fun(&num);
    printf("Updated values = %d\n",num.num);
    return 0;
}