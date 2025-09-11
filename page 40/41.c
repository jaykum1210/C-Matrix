#include <stdio.h>

int main(){
    int a,flag = 1;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 2; i <a; i++)
    {
        if (a%i==0)
        {
            flag = 0;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("%d is prime",a);
    }
    else{
        printf("%d is not prime",a);
    }
    return 0;
}