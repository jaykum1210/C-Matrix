#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of rows = ");
    scanf("%d",&a);
    printf("Enter number of columns = ");
    scanf("%d",&b);
    int c[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for (int i = 0; i < b; i++)
    {
        int sum = 0,j=0;
        for (j = 0; j<a; j++)
        {
            sum+=c[j][i];
        }
        c[a][i] = sum;
    }
    a++;
    printf("Array = \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}