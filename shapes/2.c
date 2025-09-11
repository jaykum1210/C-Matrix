#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("* ");
    }
    return 0;
}