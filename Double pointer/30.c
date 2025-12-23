#include <stdio.h>

int main(){
    int a = 99;
    int *p = &a;
    int **pp = &p;
    **pp = 3;
    printf("Value = %d\n",**pp);
    return 0;
}