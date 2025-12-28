#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    int *arr[a];
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        arr[i] = &b[i];
        scanf("%d",arr[i]);
    }
    int max = 0;
    for (int i = 0; i < a; i++)
    {
        if (*arr[i]>max)
        {
            max = *arr[i];
        }
    }
    printf("Maximum = %d\n",max);
    return 0;
}