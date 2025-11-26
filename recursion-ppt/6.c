#include <stdio.h>

int powe(int a,int b){
    if (b==0)
    {
        return 1;
    }
    return a*powe(a,b-1);
}

int main(){
    int a,b;
    printf("Enter base number = ");
    scanf("%d",&a);
    printf("Enter power = ");
    scanf("%d",&b);
    int c = powe(a,b);
    printf("Number = %d\n",c);
    return 0;
}