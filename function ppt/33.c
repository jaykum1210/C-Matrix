#include <stdio.h>
#include <math.h>


int arm(int a){
    int sum = 0;
    int temp = 0;
    int ori = a;
    while (ori>0)
    {
        temp++;
        ori/=10;
    }
    while (a>0)
    {
        int x = a%10;
        sum += (int)pow(x,temp);
        a/=10;
    }
    return sum;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = arm(a);
    if (a==b)
    {
        printf("Armstrong\n");
    }
    else{
        printf("Not a Armstrong\n");
    }
    return 0;
}