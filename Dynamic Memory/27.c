#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Memory Allocated\n");
    printf("Enter value = ");
    scanf("%d",p);
    printf("Value = %d %d\n",*p,*p);
    free(p);
    return 0;
}