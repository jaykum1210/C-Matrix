#include <stdio.h>

int main(){
    int a;
    printf("Enter size  = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int *ptr = b;
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}