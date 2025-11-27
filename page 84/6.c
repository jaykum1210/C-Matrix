#include <stdio.h>
#include <math.h>

int root(int a,int b){
    int num1 = sqrt(a);
    int num2 = sqrt(b);
    if ((num1*num1==a) || (num2*num2==b))
    {
        return 1;
    }
    else{
        return 0;
    }
}

void rec(int a){
    int b = 5*a*a + 4;
    int c = 5*a*a - 4;
    if (root(b,c))
    {
        printf("%d is present in fibonacci Series\n",a);
    }
    else{
        printf("%d is not present in fibonacci series\n",a);
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    rec(a);
    return 0;
}