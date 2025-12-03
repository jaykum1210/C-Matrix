#include <stdio.h>

int main(){
    int a = 10,b=20;
    int * const ptr = &a;
    // ptr = &b;
    printf("Address = %p\n",ptr);
    return 0;
}