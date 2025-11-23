#include <stdio.h>

void year(int a){
    if (a<0)
    {
        printf("Enter Valid year\n");
        return;
    }
    if ((a%100!=0 && a%4==0) || a%400==0)
    {
        printf("Leap Year\n");
    }
    else{
        printf("Not a leap year\n");
    }
}

int main(){
    int a;
    printf("Enter year = ");
    scanf("%d",&a);
    year(a);
    return 0;
}