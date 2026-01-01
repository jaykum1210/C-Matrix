#include <stdio.h>

struct array
{
    int a;
};

int main(){
    struct array arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d number = ",i+1);
        scanf("%d",&arr[i].a);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Value = %d\n",arr[i].a);
    }
    return 0;
}