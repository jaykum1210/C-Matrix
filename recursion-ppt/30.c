#include <stdio.h>
#include <math.h>

int bi(int a){
    if (a==0)
    {
        return 0;
    }
    return bi(a/2)*10 + a%2;
}

int main(){
    int a;
    printf("Enter nummber = ");
    scanf("%d",&a);
    int i = 0;
    int num = bi(a);
    printf("Binary number of %d = %d\n",a,num);
    return 0;
}