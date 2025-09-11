#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            if (i%2!=0)
            {
                if (j%2==0)
                {
                    printf("%c ",'A');
                }
                else{
                    printf("* ");
                }
            }
            else{
                if (j%2!=0 || j==i)
                {
                    printf("%c ",'A');
                }
                else{
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}