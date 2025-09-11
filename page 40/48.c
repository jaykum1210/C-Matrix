#include <stdio.h>

int main(){
    int a,max;
    printf("Enter number = ");
    scanf("%d",&a);
    printf("Enter %d elements = ",a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for (int i = 0; i <a; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("Maximum value = %d",max);
    return 0;
}