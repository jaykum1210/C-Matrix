#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Address of a = %p\n",&a);
    printf("Address stored in p = %p\n",p);
    printf("Address stored in pp = %p\n",pp);
    return 0;
}