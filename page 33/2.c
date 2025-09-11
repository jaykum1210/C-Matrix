#include <stdio.h>

int main(){
    int a;
    printf("Enter three digit number = ");
    scanf("%d",&a);
    int b = a%10;
    int c = a/100;
    if (b == c)
    {
        printf("%d is a palindrome",a);
    }
    else{
        printf("%d is not a palindrome",a);
    }
    return 0;
}