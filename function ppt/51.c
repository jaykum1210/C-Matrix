#include <stdio.h>

int num(int a){
    int b = 0,sum = 0,i = 1;
    while (a!=0)
    {
        b = a%10;
        sum += b*i;
        i = i*2;
        a/=10;
    }
    return sum;
}

int main(){
    int a;
    printf("Enter Binary number = ");
    scanf("%d",&a);
    int b = num(a);
    printf("Number = %d\n",b);
    return 0;
}