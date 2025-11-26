#include <stdio.h>

int rev(int a){
    static int r = 0;
    if (a==0)
    {
        return r;
    }
    r = r*10 + (a%10);
    return rev(a/10);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = rev(a);
    printf("Reverse number = %d\n",b);
    return 0;
}