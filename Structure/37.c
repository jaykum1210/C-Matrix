#include <stdio.h>

struct array
{
    int arr;
};

int main(){
    struct array a[5];
    printf("Enter 5 elements = ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i].arr);
    }
    printf("Array = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i].arr);
    }
    return 0;
}