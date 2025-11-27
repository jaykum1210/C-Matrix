#include <stdio.h>

int rec(int a){
    if (a<0)
    {
        return -(a);
    }
    else{
        return a;
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int num = rec(a);
    printf("Absolute number = %d\n",num);
    return 0;
}