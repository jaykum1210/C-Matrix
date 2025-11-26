#include <stdio.h>

int lcm(int min, int max, int i){
    if ((max*i)%min==0)
    {
        return max*i;
    }
    return lcm(min,max,i+1);
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int max = a;
    int min = b;
    if (b>max)
    {
        max = b;
        min = a;
    }
    int i = 1;
    int num = lcm(min,max,i);
    printf("LCM of %d and %d = %d\n",a,b,num);
    return 0;
}