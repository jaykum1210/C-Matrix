#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (char j = 'A'; j <= 'A'+i-1; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}