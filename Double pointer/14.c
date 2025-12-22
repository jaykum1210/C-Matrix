#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Address1 of a = %p\n",&a);
    printf("Address of pointer = %p\n",p);
    printf("Address of Double Pointer = %p\n",pp);
    return 0;
}