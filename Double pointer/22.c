#include <stdio.h>

int main(){
    int a = 10,b=20;
    int *p = &a;
    int **pp = &p;
    *pp = &b;
    printf("Value = %d\n",**pp);
    return 0;
}