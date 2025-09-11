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
        for (int j = 1; j <= (2*i -1); j++)
        {
            if (i == 1 || i == a || j == 1 || j == (2*i -1))
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}