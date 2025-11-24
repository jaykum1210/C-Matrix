#include <stdio.h>

int rev(int a[],int len){
    for (int i = 0; i < len/2; i++)
    {
        int temp = a[i];
        a[i] = a[len-i-1];
        a[len-1-i] = temp;
    }
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
    rev(a,len);
    printf("List = ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}