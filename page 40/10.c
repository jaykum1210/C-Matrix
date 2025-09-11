#include <stdio.h>

int main(){
    int a;
    int b = 9;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        printf("%d ",b);
        b = b*10 + 9;
    }
    return 0;   
}