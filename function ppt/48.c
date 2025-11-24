#include <stdio.h>

void list(int arr1[], int arr2[], int arr3[], int len){
    for (int i = 0; i < len; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main(){
    int len1;
    printf("Enter Size of 1st array = ");
    scanf("%d",&len1);
    int arr1[len1];
    printf("Enter %d elements = ",len1);
    for (int i = 0; i < len1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[len1];
    printf("Enter %d elements = ",len1);
    for (int i = 0; i < len1; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[len1];
    list(arr1,arr2,arr3,len1);
    printf("Array = ");
    for (int i = 0; i < len1; i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}