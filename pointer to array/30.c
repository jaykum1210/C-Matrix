#include <stdio.h>

int main(){
    int a;
    printf("Enter Size = ");
    scanf("%d",&a);
    int b[a],c[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int (*p1)[a];
    p1 = &b;
    int (*p2)[a];
    p2 = &c;
    for (int i = 0; i < a; i++)
    {
        (*p2)[i] = (*p1)[i];
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",(*p2)[i]);
    }
    return 0;
}