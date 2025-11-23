#include <stdio.h>

void prime(int a){
    for (int i = 2; i <=a/2; i++)
    {
        if (a%i==0)
        {
            printf("Not a Prime\n");
            return;
        }
    }
    printf("Prime\n");
    return;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    prime(a);
    return 0;
}