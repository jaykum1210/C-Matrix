#include <stdio.h>

int main(){
    int count=0,flag=1;
    printf("Enter number of elements = ");
    int arr[100];
    for (int i = 0;; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]==-1)
        {
            break;
        }
        count++;
    }
    for (int i = 0; i <count-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Not in ascending order");
    }
    else{
        printf("In ascending order");
    }
    return 0;
}