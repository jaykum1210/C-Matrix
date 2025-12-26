#include <stdio.h>

int main(){
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    int (*p)[10];
    p = &b;
    printf("Size of pointer to array = %zu\n",sizeof(p));
    return 0;
}