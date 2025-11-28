#include <stdio.h>

void rec(float b[], int a){
    float temp = b[0];
    b[0] = b[a-1];
    b[a-1] = temp;
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
    rec(b,a);
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%0.2f ",b[i]);
    }
    return 0;
}