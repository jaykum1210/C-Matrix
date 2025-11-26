#include <stdio.h>

int count(int a){
    if (a==0)
    {
        return 0;
    }
    return 1 + count(a/10);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = count(a);
    printf("Number of digits = %d\n",b);
    return 0;
}