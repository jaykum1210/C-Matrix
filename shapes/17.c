#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <2*a; i++)
    {
        if (i<=a)
        {
            for (int j = 1; j <=a-i; j++)
            {
                printf("  ");
            }
            for (int j = 1; j <=i; j++)
            {
                printf("* ");
            }
        }
        else{
            for (int j = 1; j<=i-a; j++)
            {
                printf("  ");
            }
            for (int j = 1; j <=(2*a-i); j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}