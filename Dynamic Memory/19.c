#include <stdio.h>
#include <stdlib.h>

int main(){
    long *p;
    p = (long *)malloc(sizeof(long));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter long value = ");
    scanf("%ld",p);
    printf("Long value = %ld\n",*p);
    free(p);
    return 0;
}