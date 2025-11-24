#include <stdio.h>

int mer(int arr1[], int arr2[], int len1, int len2){
    int len3 = len1;
    for (int i = 0; i < len2; i++)
    {
        arr1[len3++] = arr2[i];
    }
    return len3;
}

int main(){
    int len1,len2;
    printf("Enter size of array 1 = ");
    scanf("%d",&len1);
    int arr1[len1];
    printf("Enter %d elements = ",len1);
    for (int i = 0; i < len1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size pf array 2 = ");
    scanf("%d",&len2);
    int arr2[len2];
    printf("Enter %d elements = ",len2);
    for (int i = 0; i < len2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int len3 = mer(arr1,arr2,len1,len2);
    printf("Array = ");
    for (int i = 0; i < len3; i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}