#include <stdio.h>

int main(){
    const int a = 10;
    const int *p = &a;
    const int **pp = &p;
    printf("Value = %d\n",**pp);
    return 0;
}