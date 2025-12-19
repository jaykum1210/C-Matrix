#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int *p = &a;
    int **pp = &p;
    printf("Value = %d\n",**pp);
    *pp = &b;
    printf("Value = %d\n",**pp);
    *pp = &c;
    printf("Value = %d\n",**pp);
    return 0;
}