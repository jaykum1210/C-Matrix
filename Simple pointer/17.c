#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    int *ptr2 = ptr;
    printf("Address of ptr = %p\n",ptr);
    printf("Address of ptr1 = %p\n",ptr2);
    return 0;
}