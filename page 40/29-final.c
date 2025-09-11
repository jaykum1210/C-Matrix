#include <stdio.h>

int main(){
    int a, b =1;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            if (b>9)
            {
                b = 0;
            }
            printf("%d ",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}