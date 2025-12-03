#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a],c[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int *ptr = b;
    for (int i = 0; i < a; i++)
    {
        c[i] = *ptr;
        ptr++;
    }
    printf("Copy array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}