#include  <stdio.h>
#include <stdlib.h>

int main(){
    const int *p;
    p = (const int *)malloc(sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    *(int *)p = 10;
    printf("Value = %d\n",*p);
    free((void *)p);
    return 0;
}