#include <stdio.h>

int ar(int arr1[], int arr2[], int arr3[], int len1, int len2){
    int num = 0;
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                arr3[num] = arr1[i];
                num++;
            }
        }
    }
    return num;
}

int main(){
    int len1,len2;
    printf("Enter size of 1st array = ");
    scanf("%d",&len1);
    int arr1[len1];
    printf("Enter %d elements = ",len1);
    for (int i = 0; i < len1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of 2nd array = ");
    scanf("%d",&len2);
    int arr2[len2];
    printf("Enter %d elements = ",len2);
    for (int i = 0; i < len2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[] = {0};
    int num = ar(arr1,arr2,arr3,len1,len2);
    printf("Common Elements = ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}