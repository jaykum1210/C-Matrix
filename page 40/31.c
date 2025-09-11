#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 0; j <i; j++)
        {
            printf("%c ",97+j);
        }
        printf("\n");
    }
    return 0;
}