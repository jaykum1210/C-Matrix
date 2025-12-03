#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    printf("Address of a = %p\n",ptr);
    printf("Address of ptr = %p\n",&ptr);
    return 0;
}