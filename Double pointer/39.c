#include <stdio.h>

int main(){
    int a;
    int *p = &a;
    int **pp = &p;
    **pp = 0;
    printf("Value = %d\n",a);
    return 0;
}