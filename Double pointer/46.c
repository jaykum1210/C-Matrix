#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Value of a = %d\n",a);
    printf("Address of a = %p\n",&a);
    printf("Value of p = %d\n",*p);
    printf("Address stored in p = %p\n",p);
    printf("Address of p = %p\n",&p);
    printf("Value of pp = %d\n",**pp);
    printf("Adress stored in pp = %p\n",pp);
    printf("Address of pp = %p\n",&pp);
    return 0;
}