#include <stdio.h>

int main(){
    int a,count = 0;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < a; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == min)
        {
            count++;
        }
    }
    printf("%d appeared in array = %d\n",min,count);
    return 0;
}