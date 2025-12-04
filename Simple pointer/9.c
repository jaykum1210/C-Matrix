#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int *p = &a;
    printf("Value = %d\n",*p);
    (*p)++;
    printf("Incremented value = %d\n",*p);
    return 0;
}