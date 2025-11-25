#include <stdio.h>

void fac(int a){
    for (int i = 1; i <=a; i++)
    {
        if (a%i==0)
        {
            printf("%d ",i);
        }
    }
    return;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    fac(a);
    return 0;
}