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
    printf("Enter boolean expression (0 or 1)= ");
    scanf("%d",p);
    printf("Boolean Experission = %d\n",*p);
    free(p);
    return 0;
}