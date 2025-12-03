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
    int *ptr = b;
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum+=(*ptr);
        ptr++;
    }
    printf("Sum = %d\n",sum);
    return 0;
}