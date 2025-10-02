#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],temp[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        temp[i] = b[i];
    }
    int n;
    printf("Enter position = ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        b[i] = b[a-n+i];
    }
    for (int i = 0; i < a-n; i++)
    {
        b[n+i] = temp[i];
    }
    printf("Array = ");
    for (int i = 0; i <a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}