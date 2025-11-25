#include <stdio.h>

int pro(int b[], int len){
    int num = 1;
    for (int i = 0; i < len; i++)
    {
        num*=b[i];
    }
    return num;
}

int main(){
    int len;
    printf("Enter size = ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter %d elements = ",len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    int num = pro(arr,len);
    printf("Product = %d\n",num);
    return 0;
}