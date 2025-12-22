#include <stdio.h>

int main(){
    int a = 10,b=20;
    int *p = &a;
    int *p1 = &b;
    int **pp = &p;
    **pp = *p + *p1;
    printf("Value = %d\n",**pp);
    return 0;
}