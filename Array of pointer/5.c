#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    int *arr[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        arr[i] = &b[i];
    }
    printf("Old values = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",*arr[i]);
    }
    printf("Enter new value = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",arr[i]);
    }
    printf("New value = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",*arr[i]);
    }
    return 0;
}