#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    printf("Address of %d = %p\n",a,ptr);
    return 0;
}