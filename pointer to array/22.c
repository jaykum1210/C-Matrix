#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int num;
    printf("Enter number you want to multiply = ");
    scanf("%d",&num);
    int (*p)[a];
    p = &b;
    for (int i = 0; i < a; i++)
    {
        (*p)[i]*=num;
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",(*p)[i]);
    }
    return 0;
}