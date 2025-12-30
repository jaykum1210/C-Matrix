#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(2*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter two numbers = ");
    scanf("%d%d",&p[0],&p[1]);
    int sum = p[0] + p[1];
    printf("Sum = %d\n",sum);
    free(p);
    return 0;
}