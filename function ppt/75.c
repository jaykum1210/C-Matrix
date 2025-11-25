#include <stdio.h>

int filter(int arr[], int len){
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2==0)
        {
            arr[num++] = arr[i];
        }
    }
    return num;
}

int main(){
    int len;
    printf("Enter size = ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter %d elements = ",len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    int num = filter(arr,len);
    printf("Array = ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}