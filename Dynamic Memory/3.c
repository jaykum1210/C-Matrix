#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int n = 5;
    p = (int *)malloc(n*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Falued\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        p[i] = (i+1)*10;
    }
    printf("Array element = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}