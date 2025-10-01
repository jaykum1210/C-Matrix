#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    float b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%f",&b[i]);
    }
    for (int i = 0; i < a/2; i++)
    {
        int temp = b[i];
        b[i] = b[a-i-1];
        b[a-i-1] = temp;
    }
    printf("Array = ");
    for(int i = 0; i <a;i++){
        printf("%.02f ",b[i]);
    }
    return 0;
}