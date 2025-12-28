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
        arr[i] = &b[i];
        scanf("%d",arr[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (*arr[j]>*arr[j+1])
            {
                int temp = *arr[j];
                *arr[j] = *arr[j+1];
                *arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",*arr[i]);
    }
    return 0;
}