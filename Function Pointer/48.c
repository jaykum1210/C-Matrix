#include <stdio.h>

void rev(int *a){
    int num = 0;
    while (*a>0)
    {
        int b = *a%10;
        num = num*10 + b;
        (*a)/=10;
    }
    *a = num;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    void (*fp)(int *);
    fp = rev;
    fp(&a);
    printf("Number = %d\n",a);
    return 0;
}