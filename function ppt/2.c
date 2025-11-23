#include <stdio.h>

int sqr(int a){
    int temp = a*a;
    return temp;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = sqr(a);
    printf("Square of %d = %d\n",a,b);
    return 0;
}