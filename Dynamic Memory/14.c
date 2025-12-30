#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int *p;
    p = (int *)malloc(a*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocarion Failed\n");
        return 0;
    }
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}