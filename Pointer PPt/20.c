#include <stdio.h>

int main(){
    const int a = 10;
    const int *ptr = &a;
    printf("Value = %d\n",*ptr);
    return 0;
}