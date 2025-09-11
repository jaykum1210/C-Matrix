#include <stdio.h>

int main(){
    char a,b;
    printf("First Character = ");
    scanf(" %c",&a);
    printf("Second Character = ");
    scanf(" %c",&b);
    char c = a;
    a = b;
    b = c;
    printf("First Character = %c\n",a);
    printf("Second Character = %c\n",b);
    return 0;
}