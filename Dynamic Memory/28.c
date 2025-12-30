#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(sizeof(int));
    if (p==NULL)
    {
        printf("Memory Alloaction Failed\n");
        return 0;
    }
    printf("Enter value = ");
    scanf("%d",p);
    printf("Enter new value = ");
    scanf("%d",p);
    printf("New value = %d\n",*p);
    free(p);
    return 0;
}