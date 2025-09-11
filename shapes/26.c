#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        int count = 1;
        int num = 2;
        while (count<=i)
        {
            int flag =1;
            for (int j = 2; j<num; j++)
            {
                if (num%j==0)
                {
                    flag = 0;
                    break;
                }
                
            }
            if (flag == 1)
            {
                printf("%d ",num);
                count++;
            }
            num++;
        }
        printf("\n");
    }
    return 0;
}