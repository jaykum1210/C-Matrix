#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **p1 = &p;
    printf("Value = %d\n",**p1);
    return 0;
}