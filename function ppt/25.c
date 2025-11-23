#include <stdio.h>

int lcm(int a,int b){
    int max = a;
    int min = b;
    if (b>a)
    {
        max = b;
        min = a;
    }
    for (int i = 1;; i++)
    {
        if ((max*i)%min==0)
        {
            return max*i;
        }
    }
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int c = lcm(a,b);
    printf("LCM of %d and %d = %d\n",a,b,c);
    return 0;
}