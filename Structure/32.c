#include <stdio.h>

struct number {
    int num;
};

int main(){
    struct number n={10};
    n.num = 60;
    printf("Value = %d\n",n.num);
    return 0;
}