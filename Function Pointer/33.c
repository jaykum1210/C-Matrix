#include <stdio.h>

int ana(int a){
    int num = 0;
    while (a>0)
    {
        int b = a%10;
        num+=(b*b*b);
        a/=10;
    }
    return num;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int (*fp)(int);
    fp = ana;
    int num = fp(a);
    if (a==num)
    {
        printf("Anagram\n");
    }
    else{
        printf("Not an Anagram\n");
    }
    return 0;
}