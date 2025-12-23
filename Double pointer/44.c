#include <stdio.h>

int main(){
    int a = 10,b = 20;
    int *p;
    int **pp = &p;
    *pp = &a;
    printf("Value = %d\n",**pp);
    *pp = &b;
    printf("Value = %d\n",**pp);
    return 0;
}