#include <stdio.h>

int main(){
    int a = 10, b = 20;
    int *p = &a;
    int **pp = &p;
    printf("Old value = %d\n",**pp);
    *pp = &b;
    printf("New value = %d\n",**pp);
    return 0;
}