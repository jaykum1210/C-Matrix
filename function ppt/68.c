#include <stdio.h>

int mul(int b[], int a){
    int temp = 1;
    for (int i = 0; i < a; i++)
    {
        temp*=b[i];
    }
    return temp;
}

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
    int num = mul(b,a);
    printf("Product = %d\n",num);
    return 0;
}