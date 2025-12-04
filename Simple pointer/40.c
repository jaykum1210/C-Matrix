#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int temp = a;
    int *p = &a;
    int mul = 1;
    while (*p!=0)
    {
        mul*=(*p);
        (*p)--;
    }
    printf("Factorial of %d = %d\n",temp,mul);
    return 0;
}