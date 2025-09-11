#include <stdio.h>

int main(){
    int count=0,sum=0;
    int arr[100];
    printf("Enter elements = ");
    for (int i = 0; ; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]==-1)
        {
            break;
        }
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        sum+=arr[i];
    }
    printf("Average = %0.2f\n",(float)sum/count);
    return 0;
}