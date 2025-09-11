#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            for (int k = 1; k<=i/2+1; k++)
            {
                printf("%d ",k);
            }
            for (int k = i; k >0; k--)
            {
                printf("%d ",k);
            }
        }
        printf("\n");
    }
    return 0;
}