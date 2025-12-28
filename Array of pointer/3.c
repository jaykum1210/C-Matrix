#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three integers = ");
    scanf("%d%d%d",&a,&b,&c);
    int *arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    printf("Array = ");
    for (int i = 0; i < 3; i++)
    {
        printf("%p ",arr[i]);
    }
    return 0;
}