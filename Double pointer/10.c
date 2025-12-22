#include <stdio.h>

void fun(int **pp){
    **pp = 20;
}

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    fun(pp);
    printf("Value = %d\n",**pp);
    return 0;
}