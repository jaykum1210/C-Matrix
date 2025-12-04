#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **p1 = &p;
    **p1 = 100;
    printf("Value = %d\n",**p1);
    return 0;
}