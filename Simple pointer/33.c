#include <stdio.h>

int main(){
    const int a = 10;
    int const *p = &a;
    printf("Value = %d\n",*p);
    return 0;
}