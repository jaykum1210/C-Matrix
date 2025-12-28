#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int *arr[2] = {&a,&b};
    int temp = *arr[0];
    *arr[0] = *arr[1];
    *arr[1] = temp;
    printf("Two numbers = %d %d",a,b);
    return 0;
}