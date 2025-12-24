#include <stdio.h>

int sq(int a){
    return a*a;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int (*fp)(int);
    fp = sq;
    int num = sq(a);
    printf("Square = %d\n",num);
    return 0;
}