#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int b;
    printf("Enter number of times = ");
    scanf("%d",&b);
    int *p = &a;
    for (int i = 0; i < b; i++)
    {
        printf("%d ",*p);
    }
    return 0;
}