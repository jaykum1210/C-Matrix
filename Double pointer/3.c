#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Address in p = %p\n",p);
    printf("Address in pp = %p\n",pp);
    return 0;
}