#include <stdio.h>

void year(int a){
    if (((a%4==0)&& a%100!=0) || a%400==0)
    {
        printf("Leap Year\n");
        return;
    }
    printf("Not Leap Year");
}

int main(){
    int a;
    printf("Enter year = ");
    scanf("%d",&a);
    void (*fp)(int);
    fp = year;
    fp(a);
    return 0;
}