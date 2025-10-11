#include <stdio.h>

int main(){
    int a;
    printf("Enter number of rows and columns = ");
    scanf("%d",&a);
    int c[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<a ; j++)
        {
            printf("Enter elemnt at row %d and column %d = ",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int sum1 = 0,sum2 = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<a; j++)
        {
            if (i==j)
            {
                sum1+=c[i][j];
            }
            if (i+j==a-1)
            {
                sum2+=c[i][j];
            }
        }
    }
    printf("Sum of 1st diagonal = %d\n",sum1);
    printf("Sum of second diagonal = %d\n",sum2);
    return 0;
}