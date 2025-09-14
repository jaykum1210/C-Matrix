#include <stdio.h>

int main(){
    int a;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d number of elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}