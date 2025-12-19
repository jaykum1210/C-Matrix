#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    if (**pp != NULL && *pp != NULL)
    {
        printf("Value = %d\n",**pp);
    }
    else{
        printf("Unsafe\n");
    }
    return 0;
}