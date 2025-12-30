#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int count = 0;
    int *p;
    p = (int *)malloc(a*sizeof(int));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if ((p[i])%2!=0)
        {
            count++;
        }
        
    }
    printf("Odd Numbers = %d\n",count);
    return 0;
}