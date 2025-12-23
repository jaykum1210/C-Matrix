#include <stdio.h>

int main(){
    int a = 10,b = 20;
    int *p = &a;
    int **pp = &p;
    printf("Address = %p\n",p);
    *pp = &b;
    printf("Address = %p\n",p);
    return 0;
}