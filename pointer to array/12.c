#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elmenets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int (*p)[a];
    p = &b;
    printf("Array = ");
    for (int i = a-1; i >=0; i--)
    {
        printf("%d ",(*p)[i]);
    }
    return 0;
}