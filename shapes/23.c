#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 65; j<65+i; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}