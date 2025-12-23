#include <stdio.h>

int main(){
    int a = 10,b=20,c=30;
    int *p = &a;
    int **pp = &p;
    printf("Original value = %d\n",**pp);
    *pp = &b;
    printf("First update = %d\n",**pp);
    *pp = &c;
    printf("Second Update = %d\n",**pp);
    return 0;
}