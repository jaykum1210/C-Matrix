#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int *p = &a;
    int **pp = &p;
    printf("Old address = %p\n",pp);
    *pp = &b;
    printf("New address = %p\n",p);
    printf("New value = %d\n",**pp);
    return 0;
}