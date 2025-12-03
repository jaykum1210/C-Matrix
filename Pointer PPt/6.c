#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("Vlaue by variable= %d\t And Value by address = %d\n",a,*ptr);
    return 0;
}