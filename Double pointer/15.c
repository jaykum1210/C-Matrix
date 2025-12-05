#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int *p = &a;
    int **pp = &p;
    printf("Old Address = %p\n",p);
    *pp = &b;
    printf("New Address = %p\n",p);
    return 0;
}