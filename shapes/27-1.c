#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int count = 1;
    int num = 1;
    while (count<=a)
    {
        if (num%2==0)
        {
            printf("%d ",num);
            count++;
        }
        num++;
    }
    return 0;
}