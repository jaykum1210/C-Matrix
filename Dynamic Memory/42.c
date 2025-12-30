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
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    int val;
    printf("Enter new size (Less than %d)= ",a);
    scanf("%d",&val);
    p = (int *)realloc(p,val*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocatio Failed\n");
        return 0;
    }
    printf("Array after reallocation = ");
    for (int i = 0; i < val; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}