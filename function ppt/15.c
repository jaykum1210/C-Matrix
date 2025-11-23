#include <stdio.h>

int min(int a[],int len){
    int temp = a[0];
    for (int i = 1; i < len; i++)
    {
        if (a[i]<temp)
        {
            temp = a[i];
        }
    }
    return temp;
}

int main(){
    int len;
    printf("Enter size = ");
    scanf("%d",&len);
    int a[len];
    printf("Enter %d elements = ",len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&a[i]);
    }
    int b = min(a,len);
    printf("Minimum value = %d\n",b);
    return 0;
}