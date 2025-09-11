#include <stdio.h>

int main(){
    int a,rev=0,b;
    printf("Enter number = ");
    scanf("%d",&a);
    int or = a;
    while (a>0)
    {
        b = a%10;
        rev = rev*10 + b;
        a = a/10;
    }
    if (or==rev)
    {
        printf("%d is a palindrome",rev);
    }
    else{
        printf("%d is not a palindrome",rev);
    }
    return 0;
}