#include <stdio.h>

struct data
{
    int flag : 1;
};

int main(){
    struct data d;
    d.flag = 1;
    printf("%d\n",d.flag);
    return 0;
}