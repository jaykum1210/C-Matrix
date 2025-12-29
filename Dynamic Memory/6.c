#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int *p;
    p = (int *)malloc(a*sizeof(a));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}