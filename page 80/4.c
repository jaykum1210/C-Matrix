#include <stdio.h>

int fact(int a){
    if (a==0)
    {
        return 1;
    }
    return a*fact(a-1);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int num = fact(a);
    printf("Factorial of %d = %d\n",a,num);
    return 0;
}