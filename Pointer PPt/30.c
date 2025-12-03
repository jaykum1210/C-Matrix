#include <stdio.h>

int main(){
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    printf("Value = %d\n",**ptr2);
    return 0;
}