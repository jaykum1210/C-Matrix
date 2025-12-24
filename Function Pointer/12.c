#include <stdio.h>

void sum(int a, int b){
    printf("Addition of %d and %d = %d\n",a,b,a+b);
}

void sub(int a, int b){
    printf("Subtraction of %d and %d = %d\n",a,b,a-b);
}

void mul(int a, int b){
    printf("Multiplication of %d and %d = %d\n",a,b,a*b);
}

void div(int a, int b){
    printf("Division pf %d and %d = %d\n",a,b,a/b);
}

void mod(int a, int b){
    printf("Modulus of %d and %d = %d\n",a,b,a%b);
}

int main(){
    int a,b,option;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    printf("\nMenu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter option = %d\n");
    scanf("%d",&option);
    void (*fb)(int,int);
    switch (option)
    {
    case 1:
        fb = sum;
        break;
    case 2:
        fb = sub;
        break;
    case 3:
        fb = mul;
        break;
    case 4:
        fb = div;
        break;
    case 5:
        fb = mod;
        break;
    default:
        printf("Enter valid option\n");
        break;
    }
    fb(a,b);
    return 0;
}