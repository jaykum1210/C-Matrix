#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int sum = 0;
    int (*p)[a];
    p = &b;
    for (int i = 0; i < a; i++)
    {
        sum+=(*p)[i];
    }
    printf("Sum = %d\n",sum);
    return 0;
}