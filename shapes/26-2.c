#include <stdio.h>

int main(){
    int a,num =2,count =1;
    printf("Enter number = ");
    scanf("%d",&a);
    while (count <= a)
    {
        int flag = 1;
        for (int i = 2;i<num; i++)
        {
            if (num%i==0)
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
    
    
}