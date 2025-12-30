#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Filed\n");
        return 0;
    }
    printf("Enter number = ");
    scanf("%d",p);
    printf("Number = %d",*p);
    free(p);
    return 0;
}