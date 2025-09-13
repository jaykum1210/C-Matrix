#include <stdio.h>

int main(){
    // int a;
    // printf("Enter number of element = ");
    // scanf("%d",&a);
    int b[100],found = 1,a=0;
    printf("Enter elements = ");
    for (int i = 0;; i++)
    {
        scanf("%d",&b[i]);
        if (b[i] == 0)
        {
            break;
        }
        a++;
    }
    for (int i = 0; i < a; i++)
    {
        found = 1;
        for (int j = 2; j<b[i]; j++)
        {
            if (b[i]%j==0)
            {
                found = 0;
                break;
            }
        }
        if (found!=0)
        {
            printf("%d is prime\n",b[i]);
        }
        else{
            printf("%d is not prime\n",b[i]);
        }
    }
    return 0;
}