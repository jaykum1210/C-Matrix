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
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    int val;
    printf("Enter value = ");
    scanf("%d",&val);
    for (int i = 0; i < a; i++)
    {
        if ((p[i]==val))
        {
            printf("%d is present\n",val);
            return 0;
        }
    }
    printf("%d is not present\n",val);
    free(p);
    return 0;
}