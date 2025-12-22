#include <stdio.h>

int main(){
    int a = 10,b=100;
    int *p = &a;
    int **pp = &p;
    *pp = &b;
    printf("Value of pointer = %d\n",*p);
    return 0;
}