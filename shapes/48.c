#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i<=a; i++)
    {
        for (int j = 1; j<=a; j++)
        {
           if (i<=a/2+1)
           {
            if (i == 1 || i == a/2+1 || j == 1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
           }
           else{
            if (i == a || j == a)
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