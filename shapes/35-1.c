#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        if (i<=a/2+1)
        {
            for (int j = 1; j<=(a/2-i+1); j++)
            {
                printf("  ");
            }
            for (int j = 1;j <=(2*i-1); j++)
            {
                printf("* ");
            }
        }
        else{
            for (int j = 1; j<=(i-a/2-1); j++)
            {
                printf("  ");
            }
            for (int j = 1; j<=(2*(a-i)+1); j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}