#include <stdio.h>

int uni(int arr[], int a){
    int x = 0;
    for (int i = 0; i < a; i++)
    {
        int found = 0;
        for (int j = i-1; j >=0; j--)
        {
            if (arr[i] == arr[j])
            {
                found = 1;
            }
        }
        if (found==0)
        {
            arr[x++] = arr[i];
        }
    }
    return x;
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
    int num = uni(b,a);
    printf("Unique elements = ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}