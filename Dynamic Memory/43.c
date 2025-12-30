#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Enter rows = ");
    scanf("%d",&a);
    printf("Enter column = ");
    scanf("%d",&b);
    int *p;
    p = (int *)malloc(a*b*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element at row %d and column %d = ",i+1,j+1);
            scanf("%d",&p[i*b+j]);
        }
    }
    printf("Array =\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",p[i*b+j]);
        }
        printf("\n");
    }
    free(p);
    return 0;
}