#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = (int *)malloc(sizeof(int));
    printf("Enter number = ");
    scanf("%d",ptr);
    printf("Number = %d\n",*ptr);
    free(ptr);
    return 0;
}