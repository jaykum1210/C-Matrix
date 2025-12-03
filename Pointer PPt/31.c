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
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        int *ptr = &b[i];
        printf("%d ",*ptr);
    }
    return 0;
}