#include <stdio.h>

void rec(int a){
    int i = 1;
    int odd = 0;
    int even = 0;
    int ori = a;
    while (a>0)
    {
        int b = a%10;
        if (i%2==0)
        {
            even+=b;
        }
        else{
            odd+=b;
        }
        a/=10;
        i++;
    }
    if ((odd-even==0) || ((odd-even)%11==0))
    {
        printf("%d is divisible by 11\n",ori);
    }
    else{
        printf("%d is not divisible by 11\n",ori);
    }
    return;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    rec(a);
    return 0;
}