#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j<=a-i; j++)
        {
            printf("  ");
        }
        for (int j = i; j<2*i; j++)
        {
            printf("%d ",j);
        }
        for (int j = 2*i-2; j>=i; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}