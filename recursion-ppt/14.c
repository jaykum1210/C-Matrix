#include <stdio.h>

int rec(int b[], int a){
    static int min = __INT_MAX__;
    if (a==-1)
    {
        return min;
    }
    if (b[a]<min)
    {
        min = b[a];
    }
    return rec(b,a-1);
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
    int num = rec(b,a);
    printf("Minimum value = %d\n",num);
    return 0;
}