#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int *arr = (int *)calloc(a,sizeof(int));
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int n;
    printf("Enter new size = ");
    scanf("%d",&n);
    arr = (int *)realloc(arr,n*sizeof(int));
    printf("%d more elements = ",n-a);
    for (int i = a; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}