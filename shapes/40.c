#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        if (i<=a/2+1)
        {
            for (int j = 1; j<=i-1; j++)
            {
                printf("  ");
            }
            for (int j = 1; j<=a-2*i+2; j++)
            {
                if (j==1 || j == a-2*i+2)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        else{
            for (int j = 1; j<=a-i; j++)
            {
                printf("  ");
            }
            for (int j = 1; j<=2*i-a; j++)
            {
                if (j == 1 || j == 2*i-a)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}