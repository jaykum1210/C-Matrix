#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <2*a; i++)
    {
        if (i<=a)
        {
            for (int j = 1; j<=(i-1); j++)
            {
                printf("  ");
            }
            for (int j = 1; j<=(2*(a-i)+1); j++)
            {
                if (j==1 || j==(2*(a-i)+1) || i==1)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        else{
            for (int j = 1; j<=2*a-i-1; j++)
            {
                printf("  ");
            }
            for (int j = 1; j<=(2*(i-a)+1); j++)
            {
                if (j==1 || j==(2*(i-a)+1) || i == (2*a-1))
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