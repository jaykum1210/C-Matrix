#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 2; i<= a; i++)
    {
        if (i<a/2+1)
        {
            for (int j = 1;j <=(a/2+1-i); j++)
            {
                printf("  ");
            }
            for (int j = 1; j<=(2*i-1); j++)
            {
                if (j==i)
                {
                    printf("  ");
                }
                else{
                    printf("* ");
                }
            }
        }
        else{
            for (int j = 1; j<=(i-a/2-1); j++)
            {
                printf("  ");
            }
            for (int j = 1; j<=(2*(a-i)+1); j++)
            {
                if (j==a-i+1)
                {
                    printf("  ");
                }
                else{
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}