#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        if (i%2!=0)
        {
            printf("%d ",1);
        }
        else{
            printf("%d ",-1);
        }
    }
    return 0;
}