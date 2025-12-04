#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Value of p = %d\n",*p);
    printf("Value of pp = %d\n",**pp);
    if (**pp == *p)
    {
        printf("Same\n");
    }
    else{
        printf("Not Same\n");
    }
    return 0;
}