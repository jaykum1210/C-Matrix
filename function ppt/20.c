#include <stdio.h>

int sum(int a[],int len){
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        temp+=a[i];
    }
    return temp;
}

int main(){
    int len;
    printf("Enter size = ");
    scanf("%d",&len);
    int a[len];
    printf("Enter %d elemenst = ",len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&a[i]);
    }
    int c = sum(a,len);
    printf("Sum of all elements = %d",c);
    return 0;
}