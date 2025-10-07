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
        for (int j = 0;j<b; j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    int tar;
    printf("Enter the number you want to search = ");
    scanf("%d",&tar);
    int found;
    for (int i = 0; i < a; i++)
    {
        found = 0;
        for (int j = 0; j<b; j++)
        {
            if (c[i][j] == tar)
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            break;
        }
    }
    if (found == 1)
    {
        printf("%d is present",tar);
    }
    else{
        printf("%d is not present",tar);
    }
    return 0;
}