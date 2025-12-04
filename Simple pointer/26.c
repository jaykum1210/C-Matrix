#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int *p = b;
    int *l  = &b[a-1];
    for (int i = 0; i < a/2; i++)
    {
        int temp = *p;
        *p = *l;
        *l = temp;
        p++;
        l--;
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}