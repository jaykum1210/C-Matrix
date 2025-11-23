#include <stdio.h>

int max(int a[], int len){
    int max = a[0];
    for (int i = 1; i < len; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
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
    int b = max(a,len);
    printf("Maximum Number = %d",b);
    return 0;
}