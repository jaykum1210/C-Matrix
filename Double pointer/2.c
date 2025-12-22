#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Initial value = %d\n",**pp);
    int b = 20;
    *pp = &b;
    printf("Updated value = %d\n",**pp);
    return 0;
}