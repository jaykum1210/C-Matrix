#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter Size = ");
    scanf("%d",&a);
    int *p;
    p = (int *)malloc(a*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < a/2; i++)
    {
        int temp = p[i];
        p[i] = p[a-i-1];
        p[a-i-1] = temp;
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}