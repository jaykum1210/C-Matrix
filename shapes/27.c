#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        int count = 1;
        int num = 1;
        while (count<=i)
        {
            if (num%2==0)
            {
                printf("%d ",num);
                count++;
            }
            num++;
        }
        printf("\n");
    }
    return 0;
}