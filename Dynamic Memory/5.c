#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int *p;
    p = (int *)calloc(a,sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        p[i] = (i+1)*10;
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}