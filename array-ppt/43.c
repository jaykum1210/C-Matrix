#include <stdio.h>

int main(){
    //declare size of array1//
    int a;
    printf("Enter number of elements in first array = ");
    scanf("%d",&a);
    //insert elements in array 1//
    int b[a];
    printf("Enter %d elements in first array = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    //declare size of array2//
    int c;
    printf("Enter number of elements in second array = ");
    scanf("%d",&c);
    //insert elements in array 2//
    int d[c];
    printf("Enter %d elements in second array = ",c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d",&d[i]);
    }
    //make a third array to store elements//
    int temp[100];
    int k=0;
    for (int i = 0; i < a; i++)
    {
        temp[i] = b[i];
        k++;
    }
    for (int i = 0; i < c; i++)
    {
        int found = 1;
        for (int j = 0; j<k; j++)
        {
            if (d[i]==temp[j])
            {
                found = 0;
            }
        }
        if (found==1)
        {
            temp[k]=d[i];
            k++;
        }
    }
    //print third array//
    printf("merge array = ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}