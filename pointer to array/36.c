#include <stdio.h>

int main(){
    int a,b;
    printf("Enter size of array 1 = ");
    scanf("%d",&a);
    printf("Enter size of array 2 = ");
    scanf("%d",&b);
    int arr1[a],arr2[b];
    printf("Enter %d elements in array 1 = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter %d elements in array 2 = ",b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merge[a+b],x=0;
    int (*p1)[a];
    p1 = &arr1;
    int (*p2)[b];
    p2 = &arr2;
    for (int i = 0; i < a; i++)
    {
        merge[x++] = (*p1)[i];
    }
    for (int i = 0; i < b; i++)
    {
        int found = 0;
        for (int j = 0; j <a; j++)
        {
            if ((*p1)[j]==(*p2)[i])
            {
                found=1;
                break;
            }
        }
        if (found==0)
        {
            merge[x++] = (*p2)[i];
        }
    }
    printf("Array = ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ",merge[i]);
    }
    return 0;
}