#include <stdio.h>

int main(){
    int a=10;
    int b;
    printf("Enter number of times = ");
    scanf("%d",&b);
    int *ptr = &a;
    for (int i = 0; i < b; i++)
    {
        printf("Address %d = %p\n",i+1,ptr);
        ptr++;
    }
    return 0;
}