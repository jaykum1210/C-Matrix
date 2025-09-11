#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = (a/10)*10;
    int c = b+9;
    printf("Range of %d = (%d,%d)\n",a,b,c);
    return 0;
}