#include <stdio.h>
#include <stdlib.h>

int main(){
    int r1,c1,r2,c2;
    printf("Matrix 1\n");
    printf("Enter row = ");
    scanf("%d",&r1);
    printf("Enter column = ");
    scanf("%d",&c1);
    printf("Matrix 2\n");
    printf("Enter row = ");
    scanf("%d",&r2);
    printf("Enter column = ");
    scanf("%d",&c2);
    if (r1!=r2 || c1!=c2)
    {
        printf("Addition not possible\n");
        return 0;
    }
    int *p1;
    int *p2;
    p1 = (int *)malloc(r1*c1*sizeof(int));
    p2 = (int *)malloc(r2*c2*sizeof(int));
    printf("Matrix 1\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at row %d and column %d = ",i+1,j+1);
            scanf("%d",&p1[i*c1 + j]);
        }
    }
    printf("Matrix 2\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at row %d and column %d = ",i+1,j+1);
            scanf("%d",&p2[i*c1 + j]);
        }
    }
    printf("Sum =\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ",p1[i*c1+j] + p2[i*c1 + j]);
        }
    }
    free(p1);
    free(p2);
    return 0;
}