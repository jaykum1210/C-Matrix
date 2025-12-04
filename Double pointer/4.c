#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Value = %d\n",**pp);
    (**pp)++;
    printf("Incremented value = %d\n",(**pp));
    return 0;
}