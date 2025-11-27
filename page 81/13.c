#include <stdio.h>

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("First number = %d\n",a);
    printf("Second number = %d\n",b);
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}