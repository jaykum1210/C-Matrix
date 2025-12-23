#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    int **pp1 = &p;
    printf("Value = %d\n",**pp1);
    return 0;
}