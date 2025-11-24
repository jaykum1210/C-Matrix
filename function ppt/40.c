#include <stdio.h>

int per(int a){
    int sum = 0;
    for (int i =1; i <=a/2; i++)
    {
        if (a%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = per(a);
    if (a==b)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}