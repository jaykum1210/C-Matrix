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
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum+=*arr[i];
    }
    printf("Sum = %d\n",sum);
    return 0;
}