#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = (a%10)*100 + ((a/10)%10)*10 + (a/10)/10;
    printf("Reverse number = %d\n",b);
    return 0;
}