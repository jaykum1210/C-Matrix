#include <stdio.h>

void pri(int a){
    for (int i = 2; i <=a/2; i++)
    {
        if (a%i==0)
        {
            printf("%d is Not prime\n",a);
            return;
        }
    }
    printf("%d is prime\n",a);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    void (*fp)(int);
    fp = pri;
    fp(a);
    return 0;
}