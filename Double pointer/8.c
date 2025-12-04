#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp;
    pp = &p;
    printf("Value = %d\n",**pp);
    return 0;
}