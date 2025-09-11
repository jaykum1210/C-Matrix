#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <= (a/2 + 1); i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i==1 || i == (a/2 + 1) || j == 1 || j == a)
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