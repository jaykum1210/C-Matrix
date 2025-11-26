#include <stdio.h>

int max(int b[], int a){
    static int num = 0;
    if (a==-1)
    {
        return num;
    }
    if (b[a]>num)
    {
        num = b[a];
    }
    return max(b, a-1);
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
    int num = max(b,a-1);
    printf("Maximum value = %d\n",num);
    return 0;
}