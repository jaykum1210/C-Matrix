#include <stdio.h>

int leap(int a){
    if ((a%4==0 && a%100!=0) || a%400==0)
    {
        return 1;
    }
    return 0;
}

int main(){
    int a;
    printf("Enter year = ");
    scanf("%d",&a);
    int num = leap(a);
    if (num==1)
    {
        printf("Lear Year\n");
    }
    else{
        printf("Not a Leap Year\n");
    }
    return 0;
}