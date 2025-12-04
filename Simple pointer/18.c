#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    printf("Value = %d\n",*p);
    printf("Address = %p\n",p);
    return 0;
}