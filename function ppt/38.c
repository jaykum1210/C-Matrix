#include <stdio.h>
#include <stdlib.h>

int max(int a[] , int len){
    int num1 = a[0];
    int num2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]>num1)
        {
            num2 = num1;
            num1 = a[i];
        }
        if (a[i]>num2 && a[i]<num1)
        {
            num2 = a[i];
        }
    }
    return num2;
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Entr %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int num = max(b,a);
    printf("Second max number = %d\n",num);
    return 0;
}