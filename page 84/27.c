#include <stdio.h>

int rev(int a, int i){
    if (a==0)
    {
        return a;
    }
    int b = a%8;
    int p =1;
    for (int j = 0; j < i; j++)
    {
        p*=10;
    }
    return b*p + rev(a/8,i+1);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int i = 0;
    int num = rev(a,i);
    printf("Octal number = %d",num);
    return 0;
}