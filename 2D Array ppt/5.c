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
    
    int max = -9999;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            if (c[i][j]>max)
            {
                max = c[i][j];
            }
        }
    }
    printf("Maximum Element = %d\n",max);
    return 0;
}