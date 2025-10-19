#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of rows = ");
    scanf("%d",&a);;
    printf("Enter number of columns = ");
    scanf("%d",&b);
    int c[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element at row %d and column %d = ",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int sum=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            sum+=c[i][j];
        }
    }
    printf("Sum = %d\n",sum);
    return 0;
}