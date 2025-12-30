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
    int max = 0;
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (p[i]>max)
        {
            max = p[i];
        }
    }
    printf("Maximum Number = %d\n",max);
    free(p);
    return 0;
}