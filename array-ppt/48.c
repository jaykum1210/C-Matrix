#include <stdio.h>

int main(){
    int a;
    printf("Enter number of element in array 1 = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element in array 1 = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int c;
    printf("Enter number of element in array 2 = ");
    scanf("%d",&c);
    int d[c];
    printf("Enter %d element in array 2 = ",c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d",&d[i]);
    }
    int found = 1;
    for (int i = 0; i < a; i++)
    {
        if (b[i]!=d[i])
        {
            found = 0;
            break;
        }
    }
    if (found==1)
    {
        printf("Both array are equal\n");
    }
    else{
        printf("Both array are not equal\n");
    }
    return 0;
}