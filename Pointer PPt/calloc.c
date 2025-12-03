#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int *ptr = (int *)calloc(a,sizeof(int));
    printf("Enter %d elmeents = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}