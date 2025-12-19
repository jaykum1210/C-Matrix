#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Value = %d\n",a);
    printf("Address of value = %p\n",&a);
    printf("Address stored in first pointer = %p\n",p);
    printf("Address stored in second pointer = %p\n",pp);
    return 0;
}