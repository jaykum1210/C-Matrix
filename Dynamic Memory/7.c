#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(sizeof(p));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    *p = 10;
    printf("Number = %d\n",*p);
    free(p);
    return 0;
}