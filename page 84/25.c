#include <stdio.h>

void rev(float b[], int a){
    for (int i = 0; i < a/2; i++)
    {
        float temp = b[i];
        b[i] = b[a-i-1];
        b[a-i-1] = temp;
    }
    
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    float b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%f",&b[i]);
    }
    rev(b,a);
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%0.2f ",b[i]);
    }
    return 0;
}