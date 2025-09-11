#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 0; i < a/2; i++)
    {
        for (int j = 0; j <a; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}