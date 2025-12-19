#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *p = &a;
    int **pp = &p;
    printf("Preincrement = %d\n",++(**pp));
    printf("Predecrement = %d\n",--(**pp));
    return 0;
}