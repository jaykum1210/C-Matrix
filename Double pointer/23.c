#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Pointer = %d\n",++(**pp));
    printf("Value = %d\n",(*pp)++);
    return 0;
}