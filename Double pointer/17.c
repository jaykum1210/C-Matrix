#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    if (**pp==a)
    {
        printf("Value printed = %d\n",**pp);
    }
    else{
        printf("Value not accessed\n");
    }
    return 0;
}