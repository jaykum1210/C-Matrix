#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    (**pp)+=10;
    printf("Value = %d\n",**pp);
    return 0;
}