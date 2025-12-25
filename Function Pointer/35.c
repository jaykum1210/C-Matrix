#include <stdio.h>

int max(int a){
    int max = 0;
    while (a>0)
    {
        int b = a%10;
        if (max<b)
        {
            max = b;
        }
        a/=10;
    }
    return max;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int (*fp)(int);
    fp = max;
    int num = fp(a);
    printf("Largest digit = %d\n",num);
    return 0;
}