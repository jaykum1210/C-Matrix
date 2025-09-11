#include <stdio.h>

int main(){
    int a;
    printf("Enter rupees = ");
    scanf("%d",&a);
    int b = a/500;
    a = a%500;
    int c = a/200;
    a = a%200;
    int d = a/100;
    a = a%100;
    int e = a/50;
    a = a%50;
    int f = a/20;
    a = a%20;
    int g = a/10;
    a = a%10;
    int h = a/5;
    a = a%5;
    int i = a/2;
    a = a%2;
    int j = a;
    printf("%d X 500 = %d\n%d X 200 = %d\n%d X 100 = %d\n%d X 50 = %d\n%d X 20 = %d\n%d X 10 = %d\n%d X 5 = %d\n%d X 2 = %d\n%d X 1 = %d\n",b,b*500,c,c*200,d,d*100,e,e*50,f,f*20,g,g*10,h,h*5,i,i*2,j,j);
    return 0;
}