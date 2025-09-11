#include <stdio.h>

int main(){
    int a,sum=0;
    printf("Enter number = ");
    scanf("%d",&a);
    int original = a;
    while(a>0){
        int b = a%10;
        a = a/10;
        int c = b*b*b;
        sum+=c;
    }
    if (sum == original)
    {
        printf("%d is armstrong number.",original);
    }
    else{
        printf("%d is not an armstong number",original);
    }
    return 0;
}