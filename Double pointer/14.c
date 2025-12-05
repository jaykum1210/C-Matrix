#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Value of a = %d\n",a);
    printf("Address of a = %p\n",&a);
    printf("Value of p = %d\n",*p);
    printf("Address it hold = %p\n",p);
    printf("Value of pp = %d\n",**pp);
    printf("Address it hold = %p\n",pp);
    return 0;
}