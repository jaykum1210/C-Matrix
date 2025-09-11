#include <stdio.h>

int main(){
    int a;
    int j = 1;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        if (i%2!=0)
        {
            printf("%d ",j);
            j = j+2;
        }
        else{
            printf("%d ",-j);
            j =j+2;
        }
    }
    return 0;
}