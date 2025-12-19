#include <stdio.h>

int main(){
    int a = 10, b = 10;
    int sum;
    int *p = &sum;
    int **pp = &p;
    **pp = a + b;
    printf("Sum = %d\n",sum);
    return 0;
}