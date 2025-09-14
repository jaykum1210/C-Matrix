#include <stdio.h>

int main(){
    int a,left,right,mid,found = 0,num;
    printf("Enter number of element in array = ");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter the number you want to search = ");
    scanf("%d",&num);
    left = 0;
    right = a-1;
    while (left<=right)
    {
        mid = (left + right)/2;
        if (b[mid] == num)
        {
            found = 1;
            break;
        }
        else if (b[mid]>num)
        {
            right = mid - 1;
        }
        else{
            left = mid +1;
        }
    }
    if (found !=0)
    {
        printf("%d is present in array\n",num);
    }
    else{
        printf("%d is not present in array\n",num);
    }
    return 0;
}