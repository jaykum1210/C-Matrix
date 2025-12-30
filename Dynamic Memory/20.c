#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1;
    float *p2;
    p1 = (int *)malloc(sizeof(int));
    p2 = (float *)malloc(sizeof(float));
    if (p1==NULL || p2==NULL)
    {
        printf("Memory Allocation failed\n");
        return 0;
    }
    printf("Enter integer = ");
    scanf("%d",p1);
    printf("Enter float = ");
    scanf("%f",p2);
    printf("Integer = %d\n",*p1);
    printf("Float = %0.2f\n",*p2);
    free(p1);
    free(p2);
    return 0;
}