#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Pointer = %d\n",*p);
    printf("Double Pointer = %d\n",**pp);
    return 0;
}