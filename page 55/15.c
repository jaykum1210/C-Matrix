#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        b[i] = b[i+1];
    }
    a--;
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}