#include <stdio.h>

int main(){
    int a = 10, b = 100;
    int c = 10000;
    int *p = &c;
    int **pp = &p;
    a = **pp;
    b = **pp;
    printf("Value = %d %d\n",a,b);
    return 0;
}