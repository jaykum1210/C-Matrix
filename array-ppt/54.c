#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int temp[a];
    for (int i = 0; i < a; i++)
    {
        temp[i] = b[i];
    }
    
    for (int i = 1; i < a-1; i++)
    {
        temp[i] = b[i-1]+b[i+1];
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}