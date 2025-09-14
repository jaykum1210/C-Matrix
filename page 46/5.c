#include <stdio.h>

int main(){
    int n;
    printf("Enter number = ");
    scanf("%d",&n);
    int a=1,b,c=0;
    while (a<n)
    {
        b = a*(a+1);
        c = c+b;
        a++;
    }
    printf("Sum = %d\n",c);
    return 0;
}