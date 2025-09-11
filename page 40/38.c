#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <2*a; i++)
    {
        if (i<=a)
        {
            for (int j = 1; j<=a-i; j++)
            {
                printf("  ");
            }
            for (int j = a; j>a-i; j--)
            {
                printf("%d ",j);
            }
            for (int j = a-i+2; j<=a; j++)
            {
                printf("%d ",j);
            }
        }
        else{
            for (int j = 1; j<=i-a; j++)
            {
                printf("  ");
            }
            for (int j=a; j>=i-a+1; j--)
            {
                printf("%d ",j);
            }
            for (int j = i-a+2; j<=a; j++)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}