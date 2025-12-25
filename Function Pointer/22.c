#include <stdio.h>

void sum(int a, int b){
    printf("Addition of %d and %d = %d\n",a,b,a+b);
    return;
}

void sub(int a, int b){
    printf("Subtraction of %d and %d = %d\n",a,b,a-b);
    return;
}

void mul(int a, int b){
    printf("Multiplication of %d nad %d = %d\n",a,b,a*b);
    return;
}

void div(int a, int b){
    printf("Division of %d and %d = %d\n",a,b,a/b);
    return;
}

void mod(int a, int b){
    printf("Modulus of %d and %d = %d\n",a,b,a%b);
    return;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int option;
    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter option = ");
    scanf("%d",&option);
    void (*fp)(int , int);
    switch (option)
    {
    case 1:
        fp = sum;
        break;
    case 2:
        fp = sub;
        break;
    case 3: 
        fp = mul;
        break;
    case 4:
        fp = div;
        break;
    case 5:
        fp = mod;
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    fp(a,b);
    return 0;
}