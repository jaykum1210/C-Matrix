#include <stdio.h>
#include <stdlib.h>

void fun(int *p, int a){
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",p[i]);
    }
}

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
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    fun(p,a);
    free(p);
    return 0;
}