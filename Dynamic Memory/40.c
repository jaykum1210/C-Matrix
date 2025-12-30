#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter Size = ");
    scanf("%d",&a);
    int *p1;
    p1 = (int *)malloc(a*sizeof(int));
    if (p1==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p1[i]);
    }
    int *p2 = (int *)malloc(a*sizeof(int));
    for (int i = 0; i < a; i++)
    {
        p2[i] = p1[i];
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",p2[i]);
    }
    free(p1);
    free(p2);
    return 0;
}