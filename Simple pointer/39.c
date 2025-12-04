#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    int *p1 = &a;
    int *p2 = &b;
    int diff = *p1 - *p2;
    if (diff<0)
    {
        printf("Difference = %d\n",-(diff));
    }
    else{
        printf("Difference = %d\n",diff);
    }
    return 0;
}