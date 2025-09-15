#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int mul = 1;
    for (int i = 0; i < a; i++)
    {
        mul*=b[i];
    }
    printf("Multiplication of all elements = %d\n",mul);
    return 0;
}