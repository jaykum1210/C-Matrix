#include <stdio.h>

int po(int a,int b){
    if (b==1)
    {
        return a;
    }
    return a*po(a,b-1);
}

int main(){
    int a,b;
    printf("Enter base = ");
    scanf("%d",&a);
    printf("Enter power = ");
    scanf("%d",&b);
    int num = po(a,b);
    printf("Power = %d\n",num);
    return 0;
}