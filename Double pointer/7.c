#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int *p1 = &a;
    int *p2 = &b;
    int **pp = &p1;
    int temp = **pp;
    **pp = *p2;
    *p2 = temp;
    printf("Value = %d\n",a);
    printf("Value = %d\n",b);
    return 0;
}