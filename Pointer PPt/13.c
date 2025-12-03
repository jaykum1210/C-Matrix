#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    if (ptr1==ptr2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No");
    }
    return 0;
}