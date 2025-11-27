#include <stdio.h>

void rec(int a){
    for (int i = 2; i <=a/2; i++)
    {
        if (a%i==0)
        {
            printf("Not Prime\n");
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
    rec(a);
    return 0;
}