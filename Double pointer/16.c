#include <stdio.h>

int fun(int **pp){
    return **pp;
}

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    int result = fun(pp);
    printf("Value = %d\n",**pp);
    return 0;
}