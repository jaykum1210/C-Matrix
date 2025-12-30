#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int *p;
    p = (int *)malloc(a*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",(p+i));
    }
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (p[i]>0)
        {
            count++;
        }
    }
    printf("Positive numbers = %d\n",count);
    free(p);
    return 0;
}