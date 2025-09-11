#include <stdio.h>

int main(){
    int a,b;
    char c;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter Operator (+,-,*,/,%) = ");
    scanf(" %c",&c);
    printf("Enter second number = ");
    scanf("%d",&b);
    switch (c)
    {
    case '+':
        printf("Sum of %d and %d = %d\n",a,b,a+b);
        break;
    case '-':
        printf("Sub of %d and %d = %d\n",a,b,a-b);
        break;
    case '*':
        printf("Mul of %d and %d = %d\n",a,b,a*b);
        break;
    case '/':
        printf("Div of %d and %d = %d\n",a,b,a/b);
        break;
    case '%':
        printf("Mod of %d and %d = %d\n",a,b,a%b);
        break;
    default:
        printf("Enter Valid Operator");
        break;
    }
}