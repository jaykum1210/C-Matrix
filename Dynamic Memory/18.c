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
    printf("Enter value = ");
    scanf("%d",p);
    printf("Address = %p\n",p);
    free(p);
    return 0;
}