#include <stdio.h>

int main(){
    int a,count = 0;
    printf("Enter number = ");
    scanf("%d",&a);
    while (a>0)
    {
        // int b = a%10;
        a = a/10;
        count++;
    }
    printf("Digits = %d\n",count);
    return 0;
}