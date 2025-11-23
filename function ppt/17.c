#include <stdio.h>
#include <math.h>

int rev(int a){
    int i=0,mul = 0;
    while (a!=0)
    {
        int b = a%10;
        mul = mul*10 + b;
        a/=10;
    }
    return mul;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = rev(a);
    if (b == a)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not a Palindrome\n");
    }
    return 0;
}