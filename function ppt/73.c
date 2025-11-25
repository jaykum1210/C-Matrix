#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = pow(a,2);
    printf("Square of %d = %d",a,b);
    return 0;
}