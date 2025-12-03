#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a = (int *)malloc(sizeof(int));
    printf("Enter value = ");
    scanf("%d",a);
    printf("Value = %d\n",*a);
    free(a);
    return 0;
}