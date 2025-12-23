#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Value = %d\n",*pp);
    printf("Address = %p\n",&p);
    return 0;
}