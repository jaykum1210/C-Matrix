#include <stdio.h>

int *fun(int **pp){
    return *pp;
}

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    int *val = fun(pp);
    printf("Value = %d\n",*val);
    return 0;
}