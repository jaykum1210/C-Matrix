#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    if (pp == NULL)
    {
        printf("Null\n");
    }
    else{
        printf("Value = %d\n",**pp);
    }
    return 0;
}