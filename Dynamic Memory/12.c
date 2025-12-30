#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(3*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter Three numbers = ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Numbers = ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}