#include <stdio.h>

int main(){
    int a;
    printf("Enter Size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int sum = 0;
    int *p = b;
    for (int i = 0; i < a; i++)
    {
        sum+=(*p);
        p++;
    }
    printf("Sum = %d\n",sum);
    return 0;
}