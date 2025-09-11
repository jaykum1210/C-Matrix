#include <stdio.h>

int main(){
    int a,count=0,num = 2,sum = 0;
    printf("Enter number = ");
    scanf("%d",&a);
    while (count<a)
    {
        int flag = 1;
        for (int i = 2; i <num; i++)
        {
            if (num%i==0)
            {
                flag = 0;
                break;
            }
            
        }
        if (flag == 1)
        {
            sum+=num;
            count++;
        }
        num++;
    }
    printf("Sum of %d prime numbers = %d\n",a,sum);
    return 0;
}