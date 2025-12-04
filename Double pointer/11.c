#include <stdio.h>

int main(){
    int a=10,b=50;
    int *p = &a;
    int **pp = &p;
    *pp = &b;
    printf("%d\n",*p);
    return 0;
}