#include <stdio.h>

int min(int a){
    int min = __INT_MAX__;
    while (a>0)
    {
        int b = a%10;
        if (min>b)
        {
            min = b;
        }
        a/=10;
    }
    return min;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int (*fp)(int);
    fp = min;
    int num = fp(a);
    printf("Minimum difit = %d\n",num);
    return 0;
}