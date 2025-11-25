#include <stdio.h>

int cou(int arr[], int a){
    int num = 0;
    for (int i = 0; i < a; i++)
    {
        int found = 0;
        for (int j = 2; j <=arr[i]/2; j++)
        {
            if (arr[i]%j==0)
            {
                found = 1;
                break;
            }
        }
        if (found==0)
        {
            num++;
        }
    }
    return num;
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    
    int num = cou(b,a);
    printf("Number of prime numbers = %d\n",num);
    return 0;
}