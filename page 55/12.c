#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of element in array 1 = ");
    scanf("%d",&a);
    printf("Enter number of element in array 2 = ");
    scanf("%d",&b);
    int c[a],d[b];
    printf("Enter %d elements in array 1 = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&c[i]);
    }
    printf("Enter %d elements in array 2 = ",b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&d[i]);
    }
    int arr[a+b],t=0;
    for (int i = 0; i < a; i++)
    {
        arr[t++] = c[i];
    }
    for (int i = 0; i < b; i++)
    {
        arr[t++] = d[i];
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}