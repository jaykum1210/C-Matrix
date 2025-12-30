#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int *p;
    p = (int *)malloc(a*sizeof(a));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    int min = __INT_MAX__;
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (p[i]<min)
        {
            min = p[i];
        }
    }
    printf("Minimum Number = %d\n",min);
    free(p);
    return 0;
}