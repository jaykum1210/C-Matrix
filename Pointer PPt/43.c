#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a = (int *)malloc(sizeof(int));
    printf("Enter value = ");
    scanf("%d",a);
    int ori = *a;
    printf("Value = %d\n",*a);
    printf("Value = %d\n",*a);
    printf("Value = %d\n",*a);
    printf("Value = %d\n",*a);
    free(a);
    a = NULL;
    printf("Avoided Dangling Pointer Case\n");
    return 0;
}