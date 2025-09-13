#include <stdio.h>

int main(){
    int a,found = 1;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 2; i <=a; i++)
    {
        found = 1;
        for (int j = 2; j < i-1; j++)
        {
            if (i%j==0)
            {
                found = 0;
                break;
            }
            
        }
        if (found!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}