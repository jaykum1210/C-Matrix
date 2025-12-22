#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Increment '**p' = %d\n",++(**pp));
    printf("Increment pointer = %d\n",++p);
    return 0;
}